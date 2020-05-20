/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_02751_number_sorting2.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 13:59:16 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/20 16:46:37 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *arr, int start, int end, int *note)
{
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	if (start >= end)
		return ;
	merge_sort(arr, start, mid, note);
	merge_sort(arr, mid + 1, end, note);
	while (k <= end)
	{
		if (j > end)
			note[k++] = arr[i++];
		else if (i > mid)
			note[k++] = arr[j++];
		else if (arr[i] < arr[j])
			note[k++] = arr[i++];
		else
			note[k++] = arr[j++];
	}
	for (i = start; i <= end; i++)
		arr[i] = note[i];
}

int main(void)
{
	int *arr;
	int *note;
	int size;
	int i;

	scanf("%d", &size);
	arr = calloc(size, sizeof(int));
	note = calloc(size, sizeof(int));
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	merge_sort(arr, 0, size - 1, note);
	for(i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	free(arr);
	free(note);
	return (0);
}
