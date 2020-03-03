#include "list.h"

/*
** Removes the 'n'th element and Returns 1 if succeed, or 0 if fail
** Must free the 'n'th element
*/

int		list_remove(t_node **begin_list, int n)
{
	int i;
	t_node *tmp;

	if (n < 0 || begin_list == 0 || *begin_list == 0)
		return (0);
	if (n == 0)
	{
		tmp = *begin_list;
		*begin_list = begin_list->next;
		free(tmp);
	}
	while (i < n && (*begin_list)->next)
	{
		*begin_list = (*begin_list)->next;
		i++;
	}
	if (i != n || begin_list == 0)
		return (0);
	else
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		tmp = 0;
		return (1);
	}
}
