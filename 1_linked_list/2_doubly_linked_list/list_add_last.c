#include "list.h"

int		list_add_last(t_linked_list *list, int data)
{
	t_node *new;
	t_node *curr;

	new = create_elem(data);
	if (new == 0)
		return (0);
	curr = list->tail;
	if (list->size == 0 || curr == 0)
		list->head = new;
	else
	{
		curr->next = new;
		new->prev = curr;
	}
	list->tail = new;
	list->size++;
	return (list->size - 1);
}
