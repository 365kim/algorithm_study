#include "b2562_max.h"

/*
** Find the max value and its index among the given 9 different natural numbers.
*/

t_node *create_elem(int data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (node == 0)
		return (0);
	node->data = data;
	node->next = 0;
	return (node);
}

int		list_add_last(t_node **begin_list, int data)
{
	int		i;
	t_node	*curr;
	t_node	*new;

	if (begin_list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	if (*begin_list == 0)
	{
		*begin_list = new;
		return (0);
	}
	curr = *begin_list;
	i = 1;
	while (curr->next)
	{
		curr = curr->next;
		i++;
	}
	curr->next = new;
	return (i);
}

int		main(void)
{
	int		i;
	int		value;
	t_ans	ans;
	t_node	*begin_list;
	t_node	*curr;

	i = 0;
	while (i < 9)
	{
		scanf("%d", &value);
		if (value > 0)
		{
			list_add_last(&begin_list, value);
			i++;
		}
		else
			printf("자연수를 입력해주세요");
	}
	curr = begin_list;
	ans.value = curr->data;
	ans.index = 1;
	i = 1;
	while (curr)
	{
		ans.index = curr->data > ans.value ? i : ans.index;
		printf("i = %d, ans.index =  %d \n", i, ans.index);
		ans.value = curr->data > ans.value ? curr->data : ans.value;
		printf("i = %d, ans.value =  %d \n\n", i, ans.value);
		curr = curr->next;
		i++;
	}
	printf("%d\n%d\n", ans.value, ans.index);
	return (0);
}
