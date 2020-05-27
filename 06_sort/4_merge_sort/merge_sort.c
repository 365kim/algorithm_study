/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 17:28:57 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/27 17:25:47 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void do_merge_sort(void **items, int start, int end, int (*cmp)(void *, void *),
		           void **note)
{
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	if (start >= end)
		return ;
	do_merge_sort(items, start, mid, cmp, note);
	do_merge_sort(items, mid + 1, end, cmp, note);
	while (k <= end)
	{
		if (j > end)
			note[k++] = items[i++];
		else if (i > mid)
			note[k++] = items[j++];
		else if (cmp(items[i], items[j]) <= 0)
			note[k++] = items[i++];
		else
			note[k++] = items[j++];
	}
	for (i = start; i <= end; i++)
		items[i] = note[i];
}

int merge_sort(void **items, int size, int (*cmp)(void *, void *))
{
	void *note[size];

	do_merge_sort(items, 0, size -1, cmp, note);
	return (1);
}
