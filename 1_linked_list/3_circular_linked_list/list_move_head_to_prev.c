#include "list.h"

void	list_move_head_to_prev(t_linked_list *list)
{
	t_node *curr;

	curr = list->head;
	list->head = curr->prev;
}
