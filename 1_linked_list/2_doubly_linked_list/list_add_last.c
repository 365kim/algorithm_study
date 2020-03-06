#include "list.h"

int		list_add_last(t_linked_list *list, int data)
{
	t_node *new;

	new = create_elem(data);
	if (new == 0)
		return (0);
	if (list->tail == 0 || list->size == 0)
		list->head = new;
	else
	{
		(list->tail)->next = new;
		new->prev = list->tail;
	}
	list->tail = new;
	list->size++;
	return (list->size - 1);
}
