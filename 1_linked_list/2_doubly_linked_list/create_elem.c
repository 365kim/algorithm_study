#include "list.h"

/*
** Creates and returns a new element of t_node type
*/

t_node *create_elem(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node *));
	if (node == 0)
		return (0);
	node->data = data;
	node->prev = 0;
	node->next = 0;
	return (node);
}
