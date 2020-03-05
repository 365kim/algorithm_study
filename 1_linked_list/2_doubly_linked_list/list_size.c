#include "list.h"

/*
** Returns the number of nodes the given list has.
*/

int		list_size(t_linked_list *list)
{
	int		size;
	t_node	*curr;

	size = 0;
	curr = list->head;
	while (curr)
	{
		curr = curr->next;
		size++;
	}
	return (size);
}
