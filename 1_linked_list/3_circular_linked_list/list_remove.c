#include "list.h"

/*
** - The given function 'free_data' should be used to free the data of the nth element.
*/

void	list_remove(t_linked_list *list, int n, void (*free_data)(void *))
{
	t_node	*curr;

	if (list == 0)
		return (0);
	curr = list_get(list, n);

}
