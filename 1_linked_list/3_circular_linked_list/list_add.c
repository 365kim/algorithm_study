#include "list.h"

/*
** If n is greater than list->size, add 'new' at the very last
*/

int		get_n_for_add(int size, int n)
{
	if (n < 0)
	{
		while (n < 0)
			n += size;
		n++;
	}
	if (n > size - 1)
		while (n > size - 1)
			n -= size;
	return (n);
}

int		get_return_value(int size, int n)
{
	if (size == 1)
		return (0);
	else if (get_n_for_add(size - 1, n) == 0)
		return (size - 1);
	else
		return (get_n_for_add(size - 1, n));
}

int		list_add(t_linked_list *list, void *data, int n)
{
	t_node	*curr;
	t_node	*left;
	t_node	*new;

	if (list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	if (list->size == 0 || list->head == 0)
		list->head = new;
	else if (list->size == 1)
	{
		new->next = list->head;
		new->prev = list->head;
		(list->head)->prev = new;
		(list->head)->next = new;
	}
	else
	{
		n = get_n_for_add((int)list->size, n);
		curr = list_get(list, n);
		left = curr->prev;
		left->next = new;
		curr->prev = new;
		new->next = curr;
		new->prev = left;
	}
	list->size++;
	return (get_return_value((int)list->size, n));
}
