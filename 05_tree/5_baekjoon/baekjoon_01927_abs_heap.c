/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01927_abs_heap.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 13:19:50 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/11 14:52:06 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that process the operations defined below using Abs Heap.
** - Operation
**		1) Insert an integer into the array.
**		2) Print the smallest absolute value in the array(0 if empty) and delete it.
** - Do operation 1, if the input number is a natural number.
**   Do operation 2, if the input number is zero.
** - Input will be like
**			5           <= # of operations
**			0           <= Do peration 2
**			123456      <= Do peration 1
**			1
**			0
**			32
*/

#include <stdio.h>
#include <stdlib.h>

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
	while (i/2 && abs(heap[i]) < abs(heap[i/2]))
	{
		swap(&heap[i/2], &heap[i]);
		i = i/2;
	}
	while (abs(heap[i]) == abs(heap[i - 1]) && heap[i] < heap[i - 1])
	{
		swap(&heap[i - 1], &heap[i]);
		i = i - 1;
	}
}

void	print_and_delete(void)
{
	int i;
	int min_child;

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
			min_child = 2 * i;
		else
			min_child = abs(heap[2 * i]) <= abs(heap[2 * i + 1]) ? 2 * i : 2 * i + 1;
		if (abs(heap[i]) <= abs(heap[min_child]))
			return ;
		swap(&heap[i], &heap[min_child]);
		i = min_child;
	}
	while (i + 1 <= size)
	{
		if (abs(heap[i]) != abs(heap[i + 1]) || heap[i] <= heap[i + 1])
			return ;
		swap(&heap[i], &heap[i + 1]);
		i++;
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
