/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01181_word_sorting.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:12:53 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/24 15:15:35 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[20001][51];

int compare(const void *pa, const void *pb)
{
	int a;
	int b;

	a = strlen(pa);
	b = strlen(pb);
	if (a > b)
		return (1);
	else if (a == b)
		return (strcmp((char *)pa, (char *)pb));
	else
		return (-1);
}

int main(void)
{
	int size;
	int i, j;
	int a, b;
	char *temp;

	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		scanf("%s", word[i]);
	}
	qsort(word, size, sizeof(word[0]), compare);
	printf("%s\n", word[0]);
	temp = word[0];
	for (i = 1; i < size; i++)
	{
		if (strcmp(word[i], temp) == 0)
			continue ;
		else
		{
			printf("%s\n", word[i]);
			temp = word[i];
		}
	}
	return (0);
}
