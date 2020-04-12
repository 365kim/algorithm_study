#include "list.h"

void	free_list(t_linked_list *list)
{
	list_clear(list);
	free(list);
}
