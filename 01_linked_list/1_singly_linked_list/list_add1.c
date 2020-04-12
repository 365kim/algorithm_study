#include "list.h"

int		list_add1(t_node **begin_list, int data)
{
	int		i;
	t_node	*curr;
	t_node	*new;

	if (begin_list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	if (*begin_list == 0)
	{
		*begin_list = new;
		return (0);
	}
	curr = *begin_list;
	i = 1;
	while (curr->next)
	{
		curr = curr->next;
		i++;
	}
	curr->next = new;
	return (i);
}

/*
** line 14 : curr = new   >>>  *begin_list = new
** line 14 : begin_list = create_elem(data)   >>>  begin_list = new
*/
