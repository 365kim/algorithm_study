#include "list.h"

/*
** -  The given function 'cmp' returns '0' when data1 equals data2, 
**    or '1' when data1 and data2 are different.
*/

int		list_find(t_linked_list *list, void *data, int (*cmp)(void *data1, void *data2))
{
	int		i;
	t_node	*curr;

	if (list == 0 || cmp == 0)
		return (-1);
	i = 0;
	curr = list->head;
	while (i < (int)list->size)
	{
		if (cmp(data, curr->data) == 0)
			return (i);
		i++;
		curr = curr->next;
	}
	return (-1);
}
