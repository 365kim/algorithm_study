#include "list.h"

/*
** If n is greater than list->size, add 'new' at the very last
*/

int		list_add(t_linked_list *list, void *data, int n)
{
	t_node	*curr;
	t_node	*left;
	t_node	*new;

	if (list == 0 || n < 0)
		return (-1);
	n = n > list->size ? list->size : n;
	if ((curr = list_get(list, n)) == 0 || (new = create_elem(data)) == 0)
		return (-1);
	left = curr->prev;
	left->next = new;
	curr->prev = new;
	new->next = curr;
	new->prev = left;
	if (n == 0)
		list->head = new;
	list->size++;
	return (n);
}
