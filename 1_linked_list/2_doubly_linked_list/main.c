#include "list.h"

#include <stdio.h>

void print_list(t_linked_list *list)
{
	t_node *curr = list->head;
	printf("LIST SIZE : %d\n", list->size);
	int i = 0;
	while (curr)
	{
		printf("list[%d] -> %d\n", i, curr->data);
		i++;
		curr = curr->next;
	}
	printf("\n");
}

void print_list_rev(t_linked_list *list)
{
	t_node *curr = list->tail;
	printf("LIST SIZE : %d\n", list->size);
	int i = list->size - 1;
	while (curr)
	{
		printf("list[%d] -> %d\n", i, curr->data);
		i--;
		curr = curr->prev;
	}
	printf("\n");
}

int		main(void)
{
	t_linked_list *list = list_init();

	int i = 0;
	printf("---------- LIST_ADD -----------\n");
//1
	list_add(list, i++, 0);
	print_list(list);
//2
	list_add(list, i++, 0);
	print_list(list);
//3
	list_add(list, i++, 10000);
	print_list(list);
//4
	list_add(list, i++, 3);
	print_list(list);
//5
	list_add(list, i++, 1);
	print_list(list);
	list_add(list, i++, 1);
	print_list(list);

	printf("\n---------- LIST_GET -----------\n");
	printf("[0] : %d\n", list_get(list, 0)->data);
	printf("[1] : %d\n", list_get(list, 1)->data);
	printf("[2] : %d\n", list_get(list, 2)->data);
	printf("[3] : %d\n", list_get(list, 3)->data);

	printf("\n---------- LIST_ADD -----------\n");
//6
	list_add(list, i++, 1121242121);
	print_list(list);
//7
	list_add(list, i++, list->size);
	print_list(list);
//8
	list_add(list, i++, 1);
	print_list(list);
//9
	list_add(list, i++, 1);
	print_list(list);

	printf("\n---------- LIST_REMOVE -----------\n");
//1
	printf("%d\n", list_remove(list, 0));
	print_list(list);
//2
	print_list_rev(list);
	printf("%d\n", list_remove(list, list->size - 1));
//3
	print_list(list);
	print_list_rev(list);
//4
	printf("%d\n", list_remove(list, 1));
	print_list(list);
	print_list_rev(list);
//5
	printf("%d\n", list_remove(list, 2));
	print_list(list);
	print_list_rev(list);

	printf("\n---------- LIST_CLEAR -----------\n");
	list_clear(list);
	list_add(list, 123, 5);
	print_list(list);

	free_list(list);

	system("leaks a.out > leaks_result");
	return (0);
}
