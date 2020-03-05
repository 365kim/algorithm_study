#include "list.h"

void	list_clear(t_linked_list *list)
{
	int i;
	int n;

	i = 0;
	n = list_size(list);
	while (i < n)
	{
		list_remove(list, 0);
		i++;
	}
}
