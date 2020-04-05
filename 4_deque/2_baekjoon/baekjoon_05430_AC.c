/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_05430_AC.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 11:52:33 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/06 01:46:01 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints out results after processing
**   function R(reverse) and/or D(elete) with an integer array.
** - Input will be like :
**			2				<= # of cases
**			RDD				<= - command (1st case)
**			4				   - array size
**			[1, 2, 3, 4]	   - array content
**			DD				<= - command (2nd case)
**			1				   - array size
**			[42]			   - array content
** - If the array is empty and about to process D, print out "error".
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define FRONT 1
# define BACK -1
# define TRUE 1
# define FALSE 0

int  deque[200000];
char command[200000];
char array_content[400000];

int main(void)
{
	int  case_size;
	int  array_size;
	int  idx_front;
	int  idx_back;
	int  error;
	int  direction;
	int	 i;

	scanf("%d", &case_size);
	while (case_size--)
	{
		error = FALSE;
		direction = FRONT;
		scanf("%s", command);
		scanf("%d", &array_size);
		scanf("%s", array_content);
		if (array_size > 0)
			deque[0] = atoi(strtok(array_content, "[,]"));
		for (i = 1; i < array_size; i++)
			deque[i] = atoi(strtok(NULL, "[,]"));
		idx_front = 0;
		idx_back = array_size - 1;
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
				direction == FRONT ? idx_front++ : idx_back--;
		}
		if (error)
			printf("error\n");
		else if (direction == FRONT)
		{
			printf("[");
			for (i = idx_front; i <= idx_back; i++)
			{
				printf("%d", deque[i]);
				if (i != idx_back)
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
				if (i != idx_front)
					printf(",");
			}
			printf("]\n");
		}
	}
	return (0);
}
