#ifndef UNION_FIND_H
# define UNION_FIND_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct	s_node
{
	struct s_node *parent;
	void          *data;
}               t_node;

t_node	*create_elem(void *data);
t_node	*find(t_node *node);
bool    is_disjoint(t_node *node1, t_node *node2);
t_node	*union_func(t_node *node1, t_node *node2);

#endif
