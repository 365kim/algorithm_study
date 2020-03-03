#include "list.h"

int		list_add1(t_node **begin_list, int data)
{
	int		i;
	t_node	*current;
	t_node	*new;

	if (begin_list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	current = *begin_list;
	if (current == 0)
	{
		current = create_elem(data);
		return (0);
	}
	else
	{
		i = 1;
		while (current->next)
		{
			current = current->next;
			i++;
		}
		current->next = node;
	}
	return (i);
}
