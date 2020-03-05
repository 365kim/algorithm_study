#include "list.h"

/*
** Adds a new element which has 'data' and locates Locate it the 'n'th order in the given 'list'.
** It will be the last node if 'n' is greater than the number of nodes that 'list' has.
** Returns the index of the new element.
*/

int		list_add(t_linked_list *list, int data, int n)
{
	t_node	*new;
	t_node	*curr;
	t_node	*right;
	int		i;

	if (list == 0 || n < 0 || (new = create_elem(data)) == 0)
		return (-1);
	if ((curr = list->head) == 0 || n == 0)
	{
		new->next = list->head;
		(new->next)->prev = new;
		list->head = new;
	}
	else
	{
		i = 0;
		while (i < n - 1 && curr->next)
		{
			curr = curr->next;
			i++;
		}
		right = curr->next;
		curr->next = new;
		right->prev = new;
		new->prev = curr;
		new->next = right;
		i++;
	}
	return (i);
}
