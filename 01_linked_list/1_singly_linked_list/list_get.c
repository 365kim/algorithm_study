#include "list.h"

/*
** Returns the 'n'th element in the given list
** Returns NULL if n is greater than the number of elements in the list.
*/

t_node	*list_get(t_node *begin_list, int n)
{
	int		i;
	t_node	*curr;

	i = 0;
	curr = begin_list;
	while (i < n)
	{
		if (curr == 0)
			return (0);
		curr = curr->next;
		i++;
	}
	return (curr);
}
