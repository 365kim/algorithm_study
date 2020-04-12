/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_10866_deque.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 14:15:13 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/02 23:15:31 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write a program that processes commands with a deque that stores integers.
** There are 8 kinds of Commands to process.
**		1) push_front X
**		2) push_back X
**		3) pop_front X
**		4) pop_back X
**		5) size
**		6) empty
**		7) front
**		8) back
** The first number from stdin specifies the number of commnads following afterward.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

# define SAME 0

int	deque[20000];
int idx_front = 10000;
int idx_back = 9999;

int		main(void)
{
	char	command[11];
	int		n_command;
	int		param;

	scanf("%d", &n_command);
	while (n_command-- > 0)
	{
		scanf("%s", command);
		if (strcmp(command, "push_front") == SAME)
		{
			scanf("%d", &param);
			idx_front--;
			deque[idx_front] = param;
		}
		else if (strcmp(command, "push_back") == SAME)
		{
			scanf("%d", &param);
			idx_back++;
			deque[idx_back] = param;
		}
		else if (strcmp(command, "pop_front") == SAME)
		{
			if (idx_back - idx_front < 0)
				printf("-1\n");
			else
			{
				printf("%d\n", deque[idx_front]);
				idx_front++;
			}
		}
		else if (strcmp(command, "pop_back") == SAME)
		{
			if (idx_back - idx_front < 0)
				printf("-1\n");
			else
			{
				printf("%d\n", deque[idx_back]);
				idx_back--;
			}
		}
		else if (strcmp(command, "size") == SAME)
			printf("%d\n", (int)fmax(0, idx_back - idx_front + 1));
		else if (strcmp(command, "empty") == SAME)
		{
			if (idx_back - idx_front < 0)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(command, "front") == SAME)
		{
			if (idx_back - idx_front < 0)
				printf("-1\n");
			else
				printf("%d\n", deque[idx_front]);
		}
		else if (strcmp(command, "back") == SAME)
		{
			if (idx_back - idx_front < 0)
				printf("-1\n");
			else
				printf("%d\n", deque[idx_back]);
		}
	}
	return (0);
}
