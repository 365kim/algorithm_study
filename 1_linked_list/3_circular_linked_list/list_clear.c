#include "list.h"

void	list_clear(t_linked_list *list, void (*free_data)(void *))
{
	if (list == 0 || free_data == 0)
		return ;
	while (list->size)
		list_remove(list, 0, free_data);
}
