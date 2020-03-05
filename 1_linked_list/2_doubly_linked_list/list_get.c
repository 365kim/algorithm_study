#include "list.h"

t_node	*list_get(t_linked list *list, int n)
{
	t_node	curr;
	int		i;

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
