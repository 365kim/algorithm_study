#include "list.h"

/*
** Set 'n' to be between '0' and 'list->size - 1'
*/

t_node	*list_get(t_linked_list *list, int n)
{
	int		i;
	t_node	*curr;

	if (list == 0)
		return (0);
	while (n > list->size - 1)
		n = n - list->size;
	while (n < 0)
		n = n + list->size;
	curr = list->head;
	i = 0;
	while (i < n)
	{
		if (curr == 0)
			return (0);
		curr = curr->next;
		i++;
	}
	return (curr);
}
