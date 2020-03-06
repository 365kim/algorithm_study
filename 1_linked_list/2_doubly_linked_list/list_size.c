#include "list.h"

/*
** Returns the number of nodes the given list has.
*/

int		list_size(t_linked_list *list)
{
	if (list == 0)
		return (0);
	return (list->size);
}

/*
** whole : get size not by the previous curr->next way but a simpler list->size way.
**         this is possible because we have 'size' element in the struct t_linked_list.
*/
