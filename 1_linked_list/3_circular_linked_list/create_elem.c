#include "list.h"

/*
** Create and return a new element of t_node type 
*/

t_node	*create_elem(void *data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new == 0)
		return (0);
	new->data = data;
	new->prev = 0;
	new->next = 0;
	return (new);
}
