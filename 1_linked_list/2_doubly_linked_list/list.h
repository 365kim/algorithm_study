#ifndef LIST_H
# define LIST_H

#include "stdlib.h"

typedef struct		s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct		s_linked_list
{
	unsigned int	size;
	t_node			*head;
	t_node			*tail;
}					t_linked_list;

t_linked_list *list_init(void);
t_node *create_elem(int data);
int list_add(t_linked_list *list, int data, int n);
int list_size(t_linked_list *list);
t_node *list_get(t_linked_list *list, int n);
int list_remove(t_linked_list *list, int n);
void list_clear(t_linked_list *list);
void free_list(t_linked_list *list);

#endif
