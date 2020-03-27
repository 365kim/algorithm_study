/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_18258_queue2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 13:54:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/27 14:18:11 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** Write a program that processes commands with a queue that stores integers.
** There are 6 kinds of Commands to process.
**		1) push X
**		2) pop
**		3) size
**		4) empty
**		5) front
**		6) back
** The first number from stdin specifies the number of commnads following afterward.
*/

int		queue[2000000];
int		idx_front = 0;
int		idx_back = -1;
char	command[6];

void	push(int value)
{
	if (idx_front == -1)
		idx_front++;
	idx_back++;
	queue[idx_back] = value; 
}

void	pop(void)
{
	if (idx_front > idx_back)
	{
		printf("-1\n");
		return ;
	}
	printf("%d\n", queue[idx_front]);
	idx_front++;
}

void	size(void)
{
	printf("%d\n", idx_back - idx_front + 1);
}

void	empty(void)
{
	if (idx_front > idx_back)
		printf("1\n");
	else
		printf("0\n");
}

void	front(void)
{
	if (idx_front > idx_back)
	{
		printf("-1\n");
		return ;
	}
	printf("%d\n", queue[idx_front]);
}

void	back(void)
{
	if (idx_front > idx_back)
	{
		printf("-1\n");
		return ;
	}
	printf("%d\n", queue[idx_back]);
}
int		main(void)
{
	int	n;
	int value;

	scanf("%d", &n);
	while (n-- > 0)
	{
		scanf("%s", command);
		if (command[1] == 'u')
		{
			scanf("%d", &value);
			push(value);
		}
		else if (command[0] == 'p')
			pop();
		else if (command[0] == 's')
			size();
		else if (command[0] == 'e')
			empty();
		else if (command[0] == 'f')
			front();
		else if (command[0] == 'b')
			back();
	}
	return (0);
}
