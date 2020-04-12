#include "list.h"

int main(void)
{
	t_node **begin_list = malloc(sizeof(t_node *));

	*begin_list = 0;
	printf("------ RESULT : LIST_SIZE ---------\n");
	printf("size = %d\n", list_size(*begin_list));
	list_add1(begin_list, 0);
	printf("size = %d\n", list_size(*begin_list));
	list_add1(begin_list, 1);
	printf("size = %d\n", list_size(*begin_list));
	list_add1(begin_list, 2);
	printf("size = %d\n", list_size(*begin_list));
	list_add1(begin_list, 3);
	printf("size = %d\n", list_size(*begin_list));

	printf("\n------ RESULT : LIST_ADD1 ---------\n");
	t_node *curr = *begin_list;
	for (; curr; curr = curr->next)
	{
		printf("%d\n", curr->data);
	}

	printf("\n------ RESULT : LIST_GET ---------\n");
	for (int i = -2; i < 5; i++)
	{
		printf("%p\n", list_get(*begin_list, i));
	}

	printf("\n------ RESULT : LIST_FIND ---------\n");
	for (int i = -2; i < 6; i++)
	{
		printf("find = %d\n", list_find(*begin_list, i));
	}

	printf("\n------ RESULT : LIST_REMOVE ---------\n");
	printf("remove = %d\n", list_remove(begin_list, 3));
	curr = *begin_list;
	for (; curr; curr = curr->next)
	{
		printf("%d\n", curr->data);
	}

	printf("\n------ RESULT : LIST_ADD ---------\n");
	printf("add -> %d\n", list_add(begin_list, 10, 5));
	curr = *begin_list;
	for (; curr; curr = curr->next)
	{
		printf("%d\n", curr->data);
	}

	return (0);
}
