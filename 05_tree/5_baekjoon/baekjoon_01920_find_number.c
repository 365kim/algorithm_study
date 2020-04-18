/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01920_find_number.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 14:18:43 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/18 22:59:47 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that determines if the integer X exists
**   in the given group of numbers
** - Input will be like :
**			5				
**			4 1 5 2 3		<= the given group of numbers
**			5
**			1 3 7 9 5		<= X
** - Each X has its own return value, 1 if it exists or 0 if not.
*/

#include <stdio.h>
#include <stdlib.h>

int elem_in_group[100000];
int elem_x[100000];

int intcmp(const void *pa, const void *pb)
{
	int a = *(int *)pa;
	int b = *(int *)pb;

	if (a > b)
		return (1);
	if (a < b)
		return (-1);
	return (0);
}

int binary_search(int key, int size ,int arr[])
{
	int idx_front = 0;
	int idx_back = size - 1;
	int idx_mid;

	while (1)
	{
		idx_mid = (idx_front + idx_back) / 2;
		if (key == arr[idx_mid] || key == arr[idx_front] || key == arr[idx_back])
			return (1);
		if (key > arr[idx_mid])
			idx_front = idx_mid + 1;
		else
			idx_back = idx_mid - 1;
		if (idx_front >= idx_back)
			break ;
	}
	return (0);
}

int main(void)
{
	int num_in_group;
	int num_x;
	int i;

	scanf("%d", &num_in_group);
	for (i = 0; i < num_in_group; i++)
		scanf("%d", &elem_in_group[i]);
	qsort(elem_in_group, num_in_group, sizeof(int), intcmp);
	scanf("%d", &num_x);
	for (i = 0; i < num_x; i++)
	{
		scanf("%d", &elem_x[i]);
		printf("%d\n", binary_search(elem_x[i], num_in_group, elem_in_group));
	}
	return (0);
}
