#include "list.h"

void	list_move_head_to_prev(t_linked_list *list)
{
	if (list == 0 || list->head == 0)
		return ;
	list->head = (list->head)->prev;
}
