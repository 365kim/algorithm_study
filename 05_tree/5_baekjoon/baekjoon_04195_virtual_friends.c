/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_04195_virtual_friends.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 15:47:45 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/15 17:16:38 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints the number of people in the social network of
**   the two people who have just become friends, whenever a friendship is formed.
** - A name is a string of 1 to 20 letters (uppercase or lowercase)
** - Input will be like :
**			1                <= T : # of testcases
**			4                <= F : # of frendships formed
**			Fred Barney      <= (name) (name)
**			Betty Wilma
**			Betty Fred
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

# define ALPHABET 52
# define NONE -1

typedef struct s_node
{
	struct s_node *next[ALPHABET];
	int           index;
}              t_node;

t_node *root[ALPHABET];
char name[200001][21];
int  parent[200000];
int  size[200000];
int  n;

void reset_root(t_node *root[])
{
	for (int i = 0; i < ALPHABET; i++)
		root[i] = NULL;
}

t_node *init_trie(void)
{
	t_node *node;
	int i = 0;

	node = malloc(sizeof(t_node));
	while (i < ALPHABET)
		node->next[i++] = NULL;
	node->index = NONE;
	return (node);
}

int ft_atoi(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a');
	return (c - 'A' + 26);
}

int ft_trie(char *name)
{
	int i, j;
	t_node *curr;

	j = ft_atoi(name[0]);
	if (root[j] == NULL)
		root[j] = init_trie();
	curr = root[j];
	for (i = 1; name[i]; i++)
	{
		j = ft_atoi(name[i]);
		if (curr->next[j] == NULL)
			curr->next[j] = init_trie();
		curr = curr->next[j];
	}
	if (curr->index == NONE)
	{
		curr->index = n;
		parent[n] = n;
		size[n] = 1;
		n++;
	}
	return (curr->index);
}

int ft_find(int i)
{
	if (i == parent[i])
		return (i);
	return (parent[i] = ft_find(parent[i]));
}

int ft_union(int a, int b)
{
	int tmp;

	if (a == b)
		return (size[a]);
	if (size[a] < size[b])
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	size[a] += size[b];
	parent[b] = a;
	return (size[a]);
}

int main(void)
{
	int t, f;
	int a, b;
	char name1[21], name2[21];

	scanf("%d", &t);
	while (t--)
	{
		reset_root(root);
		scanf("%d", &f);
		n = 0;
		while(f--)
		{
			scanf("%s %s", name1, name2);
			a = ft_trie(name1);
			b = ft_trie(name2);
			printf("%d\n", ft_union(ft_find(a), ft_find(b)));
		}
	}
	return (0);
}
