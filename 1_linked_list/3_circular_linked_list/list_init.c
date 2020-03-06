#include "list.h"

t_linked_list	*list_init(void)
{
	t_linked_list *list;

	list = malloc(sizeof(t_linked_list *));
	list->size = 0;
	list->head = 0;
	return (list);
}
