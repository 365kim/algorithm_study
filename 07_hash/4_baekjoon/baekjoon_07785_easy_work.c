/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_07785_easy_work.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 15:51:33 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/03 18:43:21 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define BASE 109
# define BIG_PRIME 1000003
# define INPUT_MAX 1000001

typedef struct	s_node
{
	char name[6];
	struct s_node *next;
}				t_node;

t_node *set[BIG_PRIME] = {NULL};
char *finals[INPUT_MAX];
char *note[INPUT_MAX];

int		compare(const void *pa, const void *pb)
{
	return (strcmp((char *)pa, (char *)pb));
}

long	get_hash(char *name)
{
	long	hash, i;

	hash = 0;
	for (i = 0; name[i]; i++)
	{
		hash = hash * BASE + (name[i] - 64);
		hash %= BIG_PRIME;
	}
	return (hash);
}

t_node	*create_node(char *name)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	strcpy(node->name, name);
	node->next = NULL;
	return (node);
}

void	insert_name_with_hash(char *name, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
	{
		set[hash] = create_node(name);
		return ;
	}
	curr = set[hash];
	while (curr->next)
		curr = curr->next;
	curr->next = create_node(name);
}

void	delete_name_with_hash(char *name, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
		return ;
	curr = set[hash];
	while (curr)
	{
		if (strcmp(curr->name, name) == 0)
			curr->name[0] = '\0';
		curr = curr->next;
	}
}

int		collect_names_to_finals(void)
{
	t_node *curr;
	int i, k;

	k = 0;
	for (i = 0; i < BIG_PRIME; i++)
	{
		if ((curr = set[i]) != NULL)
		{
			while (curr)
			{
				if (curr->name[0] != '\0')
					finals[k++] = curr->name;
				curr = curr->next;
			}
		}
	}
	return (k);
}

void	merge_sort(char **finals, int start, int end, char **note)
{
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	if (start >= end)
		return ;
	merge_sort(finals, start, mid, note);
	merge_sort(finals, mid + 1, end, note);
	while (k <= end)
	{
		if (j > end)
			note[k++] = finals[i++];
		else if (i > mid)
			note[k++] = finals[j++];
		else if (strcmp(finals[i], finals[j]) <= 0)
			note[k++] = finals[i++];
		else
			note[k++] = finals[j++];
	}
	for (i = start; i <= end; i++)
		finals[i] = note[i];
}

int		main(void)
{
	int		num, i, fin;
	long	hash;
	char	name[6], action[6];

	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%s %s", name, action);
		hash = get_hash(name);
		if (action[0] == 'e')
			insert_name_with_hash(name, hash);
		else
			delete_name_with_hash(name, hash);
	}
	if ((fin = collect_names_to_finals()) == 0)
		return (0);
	merge_sort(finals, 0, fin - 1, note);
	for (i = fin - 1; i >= 0; i--)
		printf("%s\n", finals[i]);
	return (0);
}
