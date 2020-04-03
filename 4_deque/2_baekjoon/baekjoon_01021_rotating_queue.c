/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01021_rotating_queue.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 14:25:11 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/03 17:14:32 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints out at least how many times
**   operation 2 or 3 has to be exexcuted to pop all specified elements in order.
** - Operations avaliable
**		1) pop_front
**		2) pop_back + push_front
**		3) pop_front + push_back
** - Input will be like :
**			9 4			<= deque size / find size
**			1 3 7 2		<= targets to pop in order
*/

#include <stdio.h>
#include <math.h>

int deque[300];
int idx_front;
int idx_back;
int target;

void	pop_back_push_front(int min)
{
	while (min--)
	{
		idx_front--;
		deque[idx_front] = deque[idx_back];
		idx_back--;
	}
}

void	pop_front_push_back(int	min)
{
	while (min--)
	{
		idx_back++;
		deque[idx_back] = deque[idx_front];
		idx_front++;
	}
}

int	get_route_length(void)
{
	int min2 = 0;
	int min3 = 0;

	if (target == deque[idx_front])
	{
		idx_front++;
		return (0);
	}
	while (deque[idx_back - min2] != target)
		min2++;
	min2++;
	while (deque[idx_front + min3] != target)
		min3++;
	if (min2 <= min3)
		pop_back_push_front(min2);
	else
		pop_front_push_back(min3);
	idx_front++;
	return (fmin(min2, min3));
}

int	main(void)
{
	int count = 0;
	int deque_size;
	int find_size;
	int i = 0;

	scanf("%d", &deque_size);
	while (i < deque_size)
	{
		deque[i + 101] = i + 1;
		i++;
	}
	idx_front = 101;
	idx_back = 101 + deque_size - 1;
	scanf("%d", &find_size);
	while (find_size--)
	{
		scanf("%d", &target);
		count += get_route_length();
	}
	printf("%d\n", count);
}
