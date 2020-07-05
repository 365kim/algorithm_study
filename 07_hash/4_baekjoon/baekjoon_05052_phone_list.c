/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_05052_phone_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 13:21:29 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/05 15:44:52 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

# define BASE 109
# define BIG_PRIME 1000003

# define CONSISTENT 1
# define INCONSISTENT 0

typedef struct s_node
{
	char contact[11];
	bool finish;
	struct s_node *next;
}				t_node;

t_node *set[BIG_PRIME];
bool flag;
long hash;

t_node	*create_node(char *contact)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	strcpy(node->contact, contact);
	node->next = NULL;
	node->finish = false;
	return (node);
}

long	update_hash(long hash, char c)
{
	hash = hash * BASE + (c - '0' + 1);
	hash %= BIG_PRIME;
	return (hash);
}

void	check_if_partial_contact_is_finish(char *part, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
	{
		set[hash] = create_node(part);
		return ;
	}
	curr = set[hash];
	while (1)
	{
		if (strcmp(curr->contact, part) == 0)
		{
			if (curr->finish)
				flag = INCONSISTENT;
			return ;
		}
		if (curr->next == NULL)
			break ;
		curr = curr->next;
	}
	curr->next = create_node(part);
}

void	check_if_full_contact_appeared_before(char *contact, long hash)
{
	t_node *curr;

	if (set[hash] == NULL)
	{
		set[hash] = create_node(contact);
		set[hash]->finish = true;
		return ;
	}
	curr = set[hash];
	while (1)
	{
		if (strcmp(curr->contact, contact) == 0)
		{
			flag = INCONSISTENT;
			return ;
		}
		if (curr->next == NULL)
			break ;
		curr = curr->next;
	}
	curr->next = create_node(contact);
	curr->next->finish = true;
}

void	check_contact(char *contact)
{
	char part[11];
	int i, len;
	
	hash = 0;
	len = strlen(contact);
	for (i = 0; i < len - 1; i++)
	{
		part[i] = contact[i];
		part[i + 1] = '\0';
		hash = update_hash(hash, contact[i]);
		check_if_partial_contact_is_finish(part, hash);
		if (flag == INCONSISTENT)
			return ;
	}
	hash = update_hash(hash, contact[i]);
	check_if_full_contact_appeared_before(contact, hash);
}

int 	main(void)
{
	int t, n, i;
	char contact[11];

	scanf("%d", &t);
	while (t--)
	{
		for (i = 0; i < BIG_PRIME; i++)
			set[i] = NULL;
		scanf("%d", &n);
		flag = CONSISTENT;
		while (n--)
		{
			scanf("%s", contact);
			if (flag == CONSISTENT)
				check_contact(contact);
		}
		if (flag == CONSISTENT)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);
}
