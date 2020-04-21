/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_14425_string_set.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 15:52:27 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/21 16:41:02 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that tells how many strings are included in the set S.
** - Input will be like :
**			2           <= N : # of strings in set S
**			3           <= M : # of strings to scan
**			baekjoon
**			codeplus
**			codeplus
**			codeminus
**			sundaycoding
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct  s_node
{
	struct s_node *next[26];
	bool          finish;
}               t_node;

t_node *root[26];
char str[500];

t_node *activate_node(void)
{
	t_node *node;
	int i = 0;

	node = malloc(sizeof(t_node));
	while (i < 26)
		node->next[i++] = NULL;
	node->finish = false;
	return (node);
}

int	main(void)
{
	t_node *curr;
	int N, M;
	int i = 0;
	int j;
	int count = 0;

	while (i < 26)
		root[i++] = activate_node();
	scanf("%d\n", &N);
	scanf("%d\n", &M);
	while(N--)
	{
		scanf("%s", str);
		j = str[0] - 'a';
		if (root[j] == NULL)
			root[j] = activate_node();
		curr = root[j];
		for (i = 1 ; str[i] ; i++)
		{
			j = str[i] - 'a';
			if (curr->next[j] == NULL)
				curr->next[j] = activate_node();
			curr = curr->next[j];
		}
		curr->finish = true;
	}
	while (M--)
	{
		scanf("%s", str);
		j = str[0] - 'a';
		if (root[j] == NULL)
			continue ;
		curr = root[j];
		for (i = 1 ; str[i] ; i++)
		{
			j = str[i] - 'a';
			if (curr->next[j] == NULL)
				continue ;
			curr = curr->next[j];
		}
		if (curr->finish == true)
			count++;
	}
	printf("%d", count);
	return (0);
}
