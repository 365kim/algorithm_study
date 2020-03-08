#include "list.h"

/*
** - The given function 'free_data' should be used to free the data of the nth element.
*/

void	list_remove(t_linked_list *list, int n, void (*free_data)(void *))
{
	t_node	*curr;

	if (list == 0 || free_data == 0 || (curr = list_get(list, n)) == 0 ||
			curr->next == 0 || curr->prev == 0)
		return ;
	(curr->next)->prev = curr->prev;
	(curr->prev)->next = curr->next;
	if (n == 0)
		list->head = curr->next;
	free_data(curr);
	list->size--;
}
