#include "list.h"

/*
** If n is greater than list->size, add 'new' at the very last
*/

static int	calculate_index(unsigned int size, int n)
{
	int temp;

	if (size == 0)
		return (0);
	if (n >= 0)
		return (n % size);
	temp = (size - n) % size * -1;
	return (temp == 0 ? -size : temp);
}

static int	insert_prev(t_linked_list *list, t_node *curr, void *data, int index)
{
	t_node	*new;

	if (list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	list->size++;
	new->prev = curr->prev;
	curr->prev->next = new;
	new->next = curr;
	curr->prev = new;
	return (index != 0 ? index : list->size - 1);
}

static int	insert_next(t_linked_list *list, t_node *curr, void *data, int index)
{
	t_node	*new;

	if (list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	list->size++;
	new->next = curr->next;
	curr->next->prev = new;
	new->prev = curr;
	curr->next = new;
	return (index != 0 ? index : list->size - 1);
}

int		list_add_last(t_linked_list *list, void *data)
{
	t_node *new;

	if (list == 0)
		return (-1);
	if (list->size > 0)
		return (insert_prev(list, list->head, data, list->size));
	if ((new = create_elem(data)) == 0)
		return (-1);
	list->size++;
	list->head = new;
	new->prev = new;
	new->next = new;
	return (0);
}

int		list_add(t_linked_list *list, void *data, int n)
{
	t_node	*curr;

	if (list == 0)
		return (-1);
	if ((curr = list_get(list, n)) == 0)
		return (list_add_last(list, data));
	if ((n = calculate_index(list->size, n)) < 0)
		return (insert_next(list, curr, data, list->size - n - 1));
	return (insert_prev(list, curr, data, n));
}

/*
int		get_return_value(int size, int n)
{
	if (n <= 0)
		return (get_n(size, n - 1));
	else if (get_n(size - 1, n) == 0 || get_n(size - 1, n) == (size - 1))
	else if (get_ne(size - 1, n) == (size - 1))
		return (size);
	else
		return (get_n(size - 1, n));
}

int		list_add(t_linked_list *list, void *data, int n)
{
	t_node	*curr;
	t_node	*left;
	t_node	*new;

	if (list == 0 || (new = create_elem(data)) == 0)
		return (-1);
	if (list->size == 0 || list->head == 0)
	{
		list->head = new;
		list->size++;
		return (0);
	}
	if (list->size == 1)
	{
		new->next = list->head;
		new->prev = list->head;
		(list->head)->prev = new;
		(list->head)->next = new;
	}
	else
	{
		curr = list_get(list, n);
		if (curr->next == list->head)
			curr = curr->next;
		left = curr->prev;
		left->next = new;
		curr->prev = new;
		new->next = curr;
		new->prev = left;
	}
	list->size++;
	return (get_return_value((int)list->size, n));
}
*/
