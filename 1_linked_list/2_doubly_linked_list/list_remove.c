#include "list.h"

int	list_remove(t_linked_list *list, int n)
{
	t_node	*curr;
	int		i;

	if (list == 0 || n < 0)
		return (0);
	i = 0;
	curr = list->head;
	if (curr->next == 0 || n == 0)
	{
		list->head = curr->next;
		free(curr);
		return (1);
	}
	while (i < n && curr)
	{
		curr = curr->next;
		i++;
	}
	if (i == n && curr != 0)
	{
		(curr->next)->prev = curr->prev;
		(curr->prev)->next = curr->next;
		free(curr);
		return (1);
	}
	return (0);
}
