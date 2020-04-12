#include "list.h"

t_node *create_elem(int data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (node == 0)
		return (0);
	node->data = data;
	node->next = 0;
	return (node);
}
