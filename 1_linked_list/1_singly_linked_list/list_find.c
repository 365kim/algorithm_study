#include "list.h"

int	list_find(t_node *begin_list, int data)
{
	int		i;
	t_node	*curr;

	if (begin_list == 0)
		return (-1);
	i = 0;
	curr = begin_list;
	while (curr)
	{
		if (curr->data == data)
			return (i);
		curr = curr->next;
		i++;
	}
	return (-1);
}
