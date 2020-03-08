#include "list.h"
#include <stdio.h>

/*
** If n is greater than list->size, add 'new' at the very last
*/

int		list_add(t_linked_list *list, void *data, int n)
{
	t_node	*curr;
	t_node	*left;
	t_node	*new;

	printf("n : %d\n", n);
	if (list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	if (list->size == 0 || list->head == 0)
	{
		list->head = new;
		list->size++;
		return (0);
	}
	if (list->size == 1)
	{
		new->next = list->head;
		new->prev = list->head;
		(list->head)->prev = new;
		(list->head)->next = new;
	}
	else
	{
		curr = list_get(list, n);
		left = curr->prev;
		left->next = new;
		curr->prev = new;
		new->next = curr;
		new->prev = left;
	}
	list->size++;
	return (get_n((int)list->size, n));
}
