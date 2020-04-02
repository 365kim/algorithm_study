/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_02562_max.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 14:17:04 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/02 14:17:08 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

/*
** Print the max value and its index among the given 9 different natural numbers.
*/

t_node			*create_elem(int data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (node == 0)
		return (0);
	node->data = data;
	node->next = 0;
	return (node);
}

int				list_add_last(t_node **head, int data)
{
	int		i;
	t_node	*curr;
	t_node	*new;

	if (head == 0 || (new = create_elem(data)) == 0)
		return (-1);
	if (*head == 0)
	{
		*head = new;
		return (0);
	}
	curr = *head;
	i = 1;
	while (curr->next)
	{
		curr = curr->next;
		i++;
	}
	curr->next = new;
	return (i);
}

int				main(void)
{
	int		i;
	int		value[9] = {0};
	int		ans_index;
	int		ans_value;
	t_node	**head;
	t_node	*temp;
	t_node	*curr;

	head = malloc(sizeof(t_node *));
	*head = 0;
	i = 0;
	while (i < 9)
	{
		scanf("%d", &value[i]);
		list_add_last(head, value[i]);
		i++;
	}
	curr = *head;
	ans_value = (*head)->data;
	ans_index = 1;
	i = 1;
	while (curr)
	{
		ans_index = curr->data > ans_value ? i : ans_index;
		ans_value = curr->data > ans_value ? curr->data : ans_value;
		temp = curr;
		curr = curr->next;
		free(temp);
		i++;
	}
	free(head);
	printf("%d\n%d", ans_value, ans_index);
	return (0);
}
