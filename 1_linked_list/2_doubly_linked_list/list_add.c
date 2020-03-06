#include "list.h"

/*
** Adds a new element which has 'data' and locates Locate it the 'n'th order in the given 'list'.
** It will be the last node if 'n' is greater than the number of nodes that 'list' has.
** Returns the index of the new element.
*/

int		list_add(t_linked_list *list, int data, int n)
{
	t_node	*new;
	t_node	*curr;

	if (list == 0 || n < 0)
		return (-1);
	if (n >= (int)list->size)
		return (list_add_last(list, data));
	if ((curr = list_get(list, n)) == 0 || (new = create_elem(data)) == 0)
		return (-1);
	new->next = curr;
	new->prev = curr->prev;
	if (n == 0 || curr->prev == 0)
		list->head = new;
	else
		(curr->prev)->next = new;
	curr->prev = new;
	list->size++;
	return (n);
}
