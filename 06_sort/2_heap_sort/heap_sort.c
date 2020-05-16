/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 14:52:02 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/17 08:21:53 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void swap(void **a, void **b)
{
	void *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void adjust_index(void **items, void **item, int size, int order)
{
	if (order == 1)
		for (int i = 0; i < size; i++)
			item[i + 1] = items[i];
	else
		for (int i = 0; i < size; i++)
			items[i] = item[i + 1];
}

int	heap_sort(void **items, int size, int (*cmp)(void *, void *))
{
	int i, child, parent;
	void *item[size + 1];

	adjust_index(items, item, size, 1);
	for (i = 2; i <=size; i++)
	{
		child = i;
		while ((parent = child / 2) >= 1 && cmp(item[parent], item[child]) < 0)
		{
			swap(&item[parent], &item[child]);
			child = parent;
		}
	}
	for (i = size; i > 1; i--)
	{
		swap(&item[parent = 1], &item[i]);
		while ((child = parent * 2) <= i - 1)
		{
			if (child + 1 <= i - 1 && cmp(item[child], item[child + 1]) < 0)
				child++;
			if (cmp(item[parent], item[child]) >= 0)
				break ;
			swap(&item[parent], &item[child]);
			parent = child;
		}
	}
	adjust_index(items, item, size, 2);
	return (1);
}
