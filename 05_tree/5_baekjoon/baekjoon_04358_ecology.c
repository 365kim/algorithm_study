/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_04358_ecology.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:03:12 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/26 14:58:04 by mihykim          ###   ########.fr       */
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

# define n 96

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
	int i = 0;

	node = malloc(sizeof(t_node));
	for (int i = 0 ; i < n ; i++)
		node->next[i] = NULL;
	node->finish = 0;
	return (node);
}

int to_idx(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A');
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 26);
	if (c >= ' ' && c <= '@')
		return (c - ' ' + 52);
	if (c >= '[' && c <= '`')
		return (c - '[' + 85);
	return (c - '{' + 91);
}

char to_char(int i)
{
	if (i >= 0 && i < 26)
		return (i + 'A');
	if (i >= 26 && i < 52)
		return (i + 'a' - 26);
	if (i >= 52 && i < 85)
		return (i + ' ' - 52);
	if (i >= 85 && i < 91)
		return (i + '[' - 85);
	return (i + '{' - 91);
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
		buff[b] = to_char(i);
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
		j = to_idx(str[0]);
		if (root[j] == NULL)
			root[j] = activate_node();
		curr = root[j];
		for (i = 1 ; str[i] != '\n' ; i++)
		{
			j = to_idx(str[i]);
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
		buff[0] = to_char(i);
		print_in_order(root[i], buff, 0);
	}
	return (0);
}
