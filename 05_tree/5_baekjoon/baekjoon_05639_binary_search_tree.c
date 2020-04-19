/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_05639_binary_search_tree.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 12:09:58 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/19 15:31:00 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints out the result of post-order traversal of 
**   a Binary Search Tree, when the result of pre-order traversal is given.
** - Pre-order traversal  : Visit - Left - Right
** - Post-order traversal : Left - Right - Visit
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct	s_node
{
	struct s_node *left;
	struct s_node *right;
	int            key;
}               t_node;

void	insert_node(t_node **parent, int input)
{
	if (*parent == NULL)
	{
		*parent = malloc(sizeof(t_node));
		(*parent)->left = NULL;
		(*parent)->right = NULL;
		(*parent)->key = input;
	}
	else if ((*parent)->key > input)
		insert_node(&(*parent)->left, input);
	else if ((*parent)->key < input)
		insert_node(&(*parent)->right, input);
}

void	print_in_post_order(t_node *parent)
{
	if (parent == NULL)
		return ;
	print_in_post_order(parent->left);
	print_in_post_order(parent->right);
	printf("%d\n", parent->key);
}

int		main(void)
{
	t_node *root = NULL;
	int    input;

	while (scanf("%d", &input) != EOF)
		insert_node(&root, input);
	print_in_post_order(root);
	return (0);
}
