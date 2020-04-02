/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_02164_card2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 15:10:20 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/28 15:50:18 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Write a program that prints out which card is left after repeating dequeue, enqueue(front) and dequeue until there is only one left.
** The set of cards is arranged in ascending order.
** The first number from stdin specifies how many cards the given set has.
*/

#include <stdio.h>

int	queue[1000000];
int	idx_front = 0;
int idx_end;

void	enqueue(int n)
{
	idx_end++;
	queue[idx_end] = n;
}

int		dequeue()
{
	int storage;

	storage = queue[idx_front];
	queue[idx_front] = 0;
	idx_front++;
	return (storage);
}

int		main(void)
{
	int i = 0;

	scanf("%d", &idx_end);
	while (i < idx_end)
	{
		queue[i] = i + 1;
		i++;
	}
	idx_end--;
	while (idx_end - idx_front > 0)
	{
		dequeue();
		enqueue(dequeue());
	}
	printf("%d", queue[idx_front]);
	return (0);
}
