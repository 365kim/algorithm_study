#include "list.h"

/*
** Removes the 'n'th element and Returns 1 if succeed, or 0 if fail
** Must free the 'n'th element
*/

int		list_remove(t_node **begin_list, int n)
{
	int i;
	t_node *curr;

	if (n < 0 || begin_list == 0 || *begin_list == 0)
		return (0);
	curr = *begin_list;
	if (curr->next == 0 || n == 0)
	{
		*begin_list = curr->next;
		free(curr);
		return (1);
	}
	i = 0;
	while (i < n - 1 && curr->next)
	{
		curr = curr->next;
		i++;
	}
	if (i == n - 1 && curr->next != 0)
	{
		curr->next = (curr->next)->next;
		free(curr->next);
		return (1);
	}
	return (0);
}
