/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_04358_ecology.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:03:12 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/12 15:55:18 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that tells what percentage of each species account for,
**   given all trees across the United States.
** - Input will be like :
**			Red Alder
**			Ash
**			Aspen
**			Basswood
**			Ash
**			Beech
**			Yellow Birch
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define n 128

typedef struct  s_node
{
	struct s_node *next[n];
	int           finish;
}               t_node;

t_node *root[n];
int total = 0;

t_node *activate_node(void)
{
	t_node *node;
	int i;

	node = malloc(sizeof(t_node));
	for (i = 0 ; i < n ; i++)
		node->next[i] = NULL;
	node->finish = 0;
	return (node);
}

void print_in_order(t_node *node, char buff[], int b)
{
	if (node == NULL)
		return ;
	b++;
	if (node->finish > 0)
	{
		buff[b] = '\0';
		printf("%s ", buff);
		printf("%.4f\n", (double)node->finish / total * 100);
	}
	for (int i = 0; i < n ; i++)
	{
		buff[b] = i;
		print_in_order(node->next[i], buff, b);
	}
}

int	main(void)
{
	char str[31];
	char buff[31];
	t_node *curr;
	int i;
	int j;

	while (fgets(str, 30, stdin) != NULL)
	{
		j = str[0];
		if (root[j] == NULL)
			root[j] = activate_node();
		curr = root[j];
		for (i = 1 ; str[i] != '\n' ; i++)
		{
			j = str[i];
			if (curr->next[j] == NULL)
				curr->next[j] = activate_node();
			curr = curr->next[j];
		}
		curr->finish++;
		total++;
	}
	memset(buff, 0, 31);
	for (i = 0; i < n ; i++)
	{
		buff[0] = i;
		print_in_order(root[i], buff, 0);
	}
	return (0);
}
