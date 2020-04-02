/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01966_printer_queue.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 11:52:36 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/30 16:06:11 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that tells when the 'm'th element's turn to be printed is
**   among 'n' elements, regarding its priority.
** - If there is any element behind with a higher priority than the front's, dequeue and enqueue the element.
** - The first number from stdin specifies how many testcases will be given.
** - Input will be like :
** 				2			<= Two testcases will be given
**				4 0			<= The first testcase (four in total, index 0)
**				1 1 1 9
**				2 1			<= The second testcase (two in total, index 1)
**				9 8
*/

#include <stdio.h>

# define OK_TO_PRINT 1
# define PRINT_NEXT_TIME 0
# define NOT_YET 1
# define M_PRINTED 0

int queue[1000];
int idx_front;
int idx_back;
int order;
int check;
int i;
int n;
int m;

void	enqueue(int n)
{
	idx_back++;
	queue[idx_back] = n;
}

int		dequeue(void)
{
	check = OK_TO_PRINT;
	i = idx_front + 1;
	while (i <= idx_back && check)
	{
		if (queue[idx_front] < queue[i])
			check = PRINT_NEXT_TIME;
		i++;
	}
	if (check == PRINT_NEXT_TIME)
	{
		enqueue(queue[idx_front]);
		if (m == idx_front)
			m = idx_back;
	}
	else
	{
		if (m == idx_front)
			return (M_PRINTED);
		order++;
	}
	idx_front++;
	return (NOT_YET);
}

int		main(void)
{
	int testcase;
	int break_sign;

	scanf("%d", &testcase);
	while (testcase > 0)
	{
		scanf("%d", &n);
		idx_front = 0;
		idx_back = n - 1;
		scanf("%d", &m);
		i = 0;
		while (i < n)
		{
			scanf("%d", &queue[i]);
			i++;
		}
		order = 1;
		break_sign = NOT_YET;
		while (order <= n && break_sign)
			break_sign = dequeue();
		printf("%d\n", order);
		testcase--;
	}
	return (0);
}
