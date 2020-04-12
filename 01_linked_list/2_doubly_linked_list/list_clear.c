#include "list.h"

void	list_clear(t_linked_list *list)
{
	if (list == 0)
		return ;
	while (list->size)
		list_remove(list, 0);
}
