#include "list.h"

t_node	*list_get(t_linked_list *list, int n)
{
	t_node	*curr;
	int		i;

	if (list == 0 || n < 0 || n >= list->size)
		return (0);
	i = 0;
	curr = list->head;
	while (i < n)
	{
		if (curr == 0)
			return (0);
		curr = curr->next;
		i++;
	}
	return (curr);
}

/*
** line 8-9 : add protections
*/
