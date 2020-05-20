/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_10989_number_sorting3.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 16:35:08 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/20 16:55:44 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[10001] = {0};

int main(void)
{
	int size;
	int i;

	scanf("%d", &size);
	while(size--)
	{
		scanf("%d", &i);
		arr[i]++;
	}
	for (i = 1; i <= 10000; i++)
		while (arr[i]--)
			printf("%d\n", i);
	return (0);
}
