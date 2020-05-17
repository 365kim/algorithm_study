/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:38:39 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/17 18:22:40 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void swap(void **a, void **b)
{
	void *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int make_partition(void **items, int start, int end, int (*cmp)(void *, void *))
{
	void *pivot;
		
	pivot = items[(start + end) / 2];
	while (start <= end)
	{
		while (cmp(items[start], pivot) < 0)
			start++;
		while (cmp(items[end], pivot) > 0)
			end--;
		if (start <= end)
		{
			swap(&items[start], &items[end]);
			start++;
			end--;
		}
	}
	return (start);
}

void repeat_recursively(void **items, int start, int end, int (*cmp)(void *, void *))
{
	int p;
	
	p = make_partition(items, start, end, cmp);
	if (start < p - 1)
		repeat_recursively(items, start, p - 1, cmp);
	if (p < end)
		repeat_recursively(items, p, end, cmp);
}

int quick_sort(void **items, int size, int (*cmp)(void *, void *))
{
	repeat_recursively(items, 0, size - 1, cmp);
	return (1);
}
