/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01991_tree_traversal.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:09:00 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/20 13:39:14 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints out the result of pre-order, in-order and
**   post-order traversal of the given Binary Tree.
** - Input will be like :
**			7           <= # of nodes
**			A B C       <= (Root)   (Left Child) (Right Child)
**			B D .       <= (Parent) (Left Child) (Right Child)
**			C E F
**			E . .
**			F . G
**			D . .
** - 'A' is always the root node.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct	s_node
{
	struct s_node *left;
	struct s_node *right;
	char           key;
}               t_node;


void	insert_child_node(t_node **parent, char input_left, char input_right)
{
	if (input_left && input_left != '.')
	{
		(*parent)->left = malloc(sizeof(t_node));
		(*parent)->left->left = NULL;
		(*parent)->left->right = NULL;
		(*parent)->left->key = input_left;
	}
	if (input_right && input_right != '.')
	{
		(*parent)->right = malloc(sizeof(t_node));
		(*parent)->right->left = NULL;
		(*parent)->right->right = NULL;
		(*parent)->right->key = input_right;
	}
}

t_node	*find_node(t_node *node, char c)
{
	t_node *left;
	t_node *right;

	if (node == NULL)
		return (NULL);
	if (node->key == c)
		return (node);
	if ((left = find_node(node->left, c)) != NULL)
		return (left);
	if ((right = find_node(node->right, c)) != NULL)
		return (right);
	return (NULL);
}

void	print_in_preorder(t_node *parent)
{
	if (parent == NULL)
		return ;
	printf("%c", parent->key);
	print_in_preorder(parent->left);
	print_in_preorder(parent->right);
}

void	print_in_inorder(t_node *parent)
{
	if (parent == NULL)
		return ;
	print_in_inorder(parent->left);
	printf("%c", parent->key);
	print_in_inorder(parent->right);
}

void	print_in_postorder(t_node *parent)
{
	if (parent == NULL)
		return ;
	print_in_postorder(parent->left);
	print_in_postorder(parent->right);
	printf("%c", parent->key);
}

int		main(void)
{
	t_node *root;
	t_node *parent = NULL;
	int    num_node;
	char   input_parent;
	char   input_left;
	char   input_right;

	root = malloc(sizeof(t_node));
	root->left = NULL;
	root->right = NULL;
	root->key = 'A';
	scanf("%d", &num_node);
	getchar();
	while(num_node-- > 0)
	{
		scanf("%c %c %c", &input_parent, &input_left, &input_right);
		getchar();
		parent = find_node(root, input_parent);
		insert_child_node(&parent, input_left, input_right);
	}
	print_in_preorder(root);
	printf("\n");
	print_in_inorder(root);
	printf("\n");
	print_in_postorder(root);
	return (0);
}
