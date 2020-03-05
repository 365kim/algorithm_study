#include "list.h"

int	list_add(t_node **begin_list, int data, int n)
{
	int		i;
	t_node	*new;
	t_node	*curr;

	if (begin_list == 0 || n < 0 || (new = create_elem(data)) == 0)
		return (-1);
	i = 0;
	if ((curr = *begin_list) == 0 || n == 0)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		while (curr->next && i < n - 1)
		{
			curr = curr->next;
			i++;
		}
		new->next = curr->next;
		curr->next = new;
		i++;
	}
	return (i);
}
