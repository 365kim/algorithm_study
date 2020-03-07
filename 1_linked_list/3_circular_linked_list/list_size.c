#include "list.h"

int		list_size(t_linked_list *list)
{
	if (list == 0)
		return (0);
	return (list->size);
}
