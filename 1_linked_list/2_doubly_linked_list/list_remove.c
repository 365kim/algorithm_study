#include "list.h"

int	list_remove(t_linked_list *list, int n)
{
	t_node	*curr;

	if (list == 0 || n < 0 || n >= list->size || (curr = list_get(list, n)) == 0)
		return (0);
	if (curr->prev == 0 || n == 0)
	{
		list->head = curr->next;
		(curr->next)->prev = 0;
	}
	else if (curr->next == 0 || n == list->size)
	{
		list->tail = curr->prev;
		(curr->prev)->next = 0;
	}
	else
	{
		(curr->next)->prev = curr->prev;
		(curr->prev)->next = curr->next;
	}
	list->size--;
	free(curr);
	return (1);
}
