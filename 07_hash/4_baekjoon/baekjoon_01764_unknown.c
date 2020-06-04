/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01764_unknown.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 18:16:19 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/04 23:49:55 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define BASE 109
# define BIG_PRIME 1000003

typedef struct	s_node
{
	char name[21];
	struct s_node *next;
}				t_node;

t_node *set[BIG_PRIME] = {NULL};
char *list[500001] = {NULL};
char *note[500001] = {NULL};
int count = 0;

long	get_hash(char *name)
{
	long hash = 0;
	int i = 0;

	for (i = 0; name[i]; i++)
	{
		hash = hash * BASE + (name[i] - 'a' + 1);
		hash %= BIG_PRIME;
	}
	return (hash);
}

void	*create_node(char *name)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	strcpy(new->name, name);
	new->next = NULL;
	return (new);
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

void	collect_name_with_hash(char *name, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
		return ;
	curr = set[hash];
	while (curr)
	{
		if (strcmp(curr->name, name) == 0)
		{
			list[count++] = curr->name;
			return ;
		}
		curr = curr->next;
	}
}

void	merge_sort(char **list, int start, int end, char **note)
{
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	if (start >= end)
		return ;
	merge_sort(list, start, mid, note);
	merge_sort(list, mid + 1, end, note);
	while (k <= end)
	{
		if (j > end)
			note[k++] = list[i++];
		else if (i > mid)
			note[k++] = list[j++];
		else if (strcmp(list[i], list[j]) <= 0)
			note[k++] = list[i++];
		else
			note[k++] = list[j++];
	}
	for (i = start; i <= end; i++)
		list[i] = note[i];
}

int 	main(void)
{
	char	name[21];
	long	hash;
	int		n, m, i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%s", name);
		hash = get_hash(name);
		insert_name_with_hash(name, hash);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%s", name);
		hash = get_hash(name);
		collect_name_with_hash(name, hash);
	}
	merge_sort(list, 0, count - 1, note);
	printf("%d\n", count);
	for (i = 0; i < count; i++)
		printf("%s\n", list[i]);
	return (0);
}
