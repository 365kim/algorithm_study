#include "list.h"

/*
** Set 'n' to be between '0' and 'list->size - 1'
*/

int		get_n(int size, int n)
{
	if (n > size - 1)
		while (n > size - 1)
			n -= size;
	else if (n < 0)
		while (n < 0) 
			n += size;
	return (n);
}

t_node	*list_get(t_linked_list *list, int n)
{
	int		i;
	t_node	*curr;

	if (list == 0 || list->size == 0 || list->head == 0)
		return (0);
	if (list->size == 1)
		return (list->head);
	n = get_n((int)list->size, n);
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
