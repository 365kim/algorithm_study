/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_11279_max_heap.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 10:27:53 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/21 10:33:14 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that process the operations defined below using Max Heap.
** - Operation
**		1) Insert a natural number into the array.
**		2) Print the max value in the array(0 if empty) and delete it.
** - Do operation 1, if the input number is a natural number.
**   Do operation 2, if the input number is zero.
** - Input will be like :
**			5           <= # of operations
**			0           <= Do peration 2
**			123456      <= Do peration 1
**			1
**			0
**			32
*/

#include <stdio.h>

int heap[100000];
int size = 0;

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	insert(int input)
{
	int i;

	i = ++size;
	heap[i] = input;
	while (i/2 && heap[i] >  heap[i/2])
	{
		swap(&heap[i/2], &heap[i]);
		i = i/2;
	}
}

void	print_and_delete(void)
{
	int i;
	int max_child;

	if (size == 0)
	{
		printf("0\n");
		return ;
	}
	printf("%d\n", heap[1]);
	swap(&heap[1], &heap[size--]);
	i = 1;
	while (2 * i <= size)
	{
		if (2 * i + 1 > size)
			max_child = 2 * i;
		else
			max_child = heap[2 * i] >= heap[2 * i + 1] ? 2 * i : 2 * i + 1;
		if (heap[i] >= heap[max_child])
			return ;
		swap(&heap[i], &heap[max_child]);
		i = max_child;
	}
}

int		main(void)
{
	int num_operation;
	int input;

	scanf("%d", &num_operation);
	getchar();
	while (num_operation--)
	{
		scanf("%d", &input);
		getchar();
		if (input == 0)
			print_and_delete();
		else
			insert(input);
	}
	return (0);
}
