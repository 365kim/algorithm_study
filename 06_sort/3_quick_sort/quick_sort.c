/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:38:39 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/19 17:21:36 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void swap(void **a, void **b)
{
	void *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void do_quick_sort(void **items, int start, int end, int (*cmp)(void *, void *))
{
	int i = start;
	int j = end;
	void *pivot = items[(start + end) / 2];
	int tmp;

	while (i <= j)
	{
		while (cmp(items[i], pivot) < 0)
			i++;
		while (cmp(items[j], pivot) > 0)
			j--;
		if (i <= j)
		{
			swap(&items[i], &items[j]);
			i++;
			j--;
		}
	}
	if (start < j)
		do_quick_sort(items, start, j, cmp);
	if (i < end)
		do_quick_sort(items, i, end, cmp);
}

int quick_sort(void **items, int size, int (*cmp)(void *, void *))
{
	do_quick_sort(items, 0, size - 1, cmp);
	return (1);
}
