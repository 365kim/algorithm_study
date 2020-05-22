/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01181_word_sorting.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:12:53 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/22 21:47:15 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[20001][51];

void swap(char *a, char *b)
{
	char temp[51];

	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

int main(void)
{
	int size;
	int i, j;
	int a, b;
	char temp[51];

	scanf("%d", &size);
	for (i = 0; i < size; i++)
		scanf("%s", word[i]);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			a = strlen(word[j]);
			b = strlen(word[j + 1]);
			if (a > b)
				swap(word[j], word[j + 1]);
			else if (a == b && strcmp(word[j], word[j + 1]) > 0)
				swap(word[j], word[j + 1]);
		}
	}
	printf("%s\n", word[0]);
	strcpy(temp, word[0]);
	for (i = 1; i < size; i++)
	{
		if (strcmp(word[i], temp) == 0)
			continue ;
		else
		{
			printf("%s\n", word[i]);
			strcpy(temp, word[i]);
		}
	}
	return (0);
}
