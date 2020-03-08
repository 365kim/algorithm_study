#include "list.h"

void	free_list(t_linked_list *list, void (*free_data)(void *))
{
	if (list == 0 || free_data == 0)
		return ;
	list_clear(list);
	free(list);
}
