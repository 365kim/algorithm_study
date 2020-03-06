#include "list.h"

void	list_clear(t_linked_list *list)
{
	int i;

	i = 0;
	while (i < list->size)
	{
		list_remove(list, 0);
		i++;
	}
}
