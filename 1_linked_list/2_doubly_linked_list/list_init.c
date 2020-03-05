#include "list.h"

/*
** Allocates and initializes a new struct, which type is t_linked_list
** Returns the struct
*/

t_linked_list	*list_init(void)
{
	t_linked_list	*new;

	new = malloc(sizeof(t_linked_list));
	if (new == 0)
		return (0);
	new.size = 0;
	new->head = 0;
	new->tail = 0;
	return (new);
}
