/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 21:27:12 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/15 21:47:54 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bubble_sort(void **items, int size, int (*cmp)(void *, void *))
{
	void *temp;
	int i;
	int j;

	for(i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (cmp(items[j], items[j + 1]) > 0)
			{
				temp = items[j];
				items[j] = items[j + 1];
				items[j + 1] = temp;
			}
		}
	}
}
