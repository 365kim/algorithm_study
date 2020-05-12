/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_05052_phone_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 17:14:00 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/12 20:28:58 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that determines if the list of phone numbers is consistent
**   in a sense that no number is the prefix of another.
** - Inconsistent case: Emergency 911 / Bob 91125426
** - Print "YES" if the list is consistent, or "NO" otherwise, for each test case.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

# define YES 1
# define NO 0

typedef struct s_node
{
	struct s_node *next[10];
	bool           finish;
}              t_node;

t_node *root[10];
int    j;

t_node *activate_node(void)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	for (int i = 0; i < 10; i++)
		node->next[i] = NULL;
	node->finish = false;
	return (node);
}

bool check_node(t_node *curr, char *nbr)
{
	if (*nbr == '\0')
	{
		if (curr->finish == true)
			return (NO);
		curr->finish = true;
		return (YES);
	}
	j = *nbr - '0';
	if (curr->next[j] == NULL)
		curr->next[j] = activate_node();
	else if (curr->next[j]->finish == true)
		return (NO);
	return (check_node(curr->next[j], nbr + 1));
}

int main(void)
{
	int n_test;
	int n_case;
	char nbr[11];
	bool result;

	scanf("%d", &n_test);
	while (n_test--)
	{
		scanf("%d", &n_case);
		result = YES;
		while (n_case--)
		{
			scanf("%s", nbr);
			if (result == NO)
				continue ;
			j = *nbr - '0';
			if (root[j] && root[j]->finish == true)
			{
				result = NO;
				continue ;
			}
			if (root[j] == NULL)
				root[j] = activate_node();
			result = check_node(root[j], nbr + 1);
		}
		if (result == YES)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);
}
