#include "list.h"

/*
** Returns the 'n'th element in the given list
** Returns NULL if n is greater than the number of elements in the list.
*/

t_node	*list_get(t_node *begin_list, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (begin_list == 0)
			return (0);
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list->data);
}
