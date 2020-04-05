/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_05430_AC.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 11:52:33 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/06 00:08:18 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints out results after processing
**   function R(reverse) and/or D(elete) with an integer array.
** - Input will be like :
**			2				<= # of testcase
**			RDD				<= 1st case
**			4
**			[1, 2, 3, 4]
**			DD				<= 2nd case
**			1
**			[42]
** - If the array is empty and about to process D, print out "error".
*/

#include <stdio.h>

# define FRONT 1
# define BACK -1
# define TRUE 1
# define FALSE 0


int main(void)
{
	int  deque[100000];
	char command[100000];
	char array_content[200002];
	int  array_size;
	int  case_size;
	int  idx_front;
	int  idx_back;
	int  direction;
	int  error;
	int	 i;

	scanf("%d", &case_size);
	while (case_size--)
	{
		scanf("%s", command);
		scanf("%d", &array_size);
		scanf("%s", array_content);
		for (i = 0; i < array_size; i++)
			deque[i] = array_content[2 * i + 1] - '0';
		idx_front = 0;
		idx_back = array_size - 1;
		direction = FRONT;
		error = FALSE;
		for (i = 0; command[i]; i++)
		{
			if (command[i] == 'R')
				direction *= -1;
			else if (idx_back - idx_front + 1 <= 0)
			{
				error = TRUE;
				break ;
			}
			else
			{
				if (direction == FRONT)
					idx_front++;
				else
					idx_back--;
			}
		}
		if (error)
			printf("error\n");
		else if (direction == FRONT)
		{
			printf("[");
			for (i = idx_front; i <= idx_back; i++)
			{
				printf("%d", deque[i]);
				if (i < idx_back)
					printf(",");
			}
			printf("]\n");
		}
		else
		{
			printf("[");
			for (i = idx_back; i >= idx_front; i--)
			{
				printf("%d",deque[i]);
				if (i > idx_front)
					printf(",");
			}
			printf("]\n");
		}
	}
	return (0);
}
