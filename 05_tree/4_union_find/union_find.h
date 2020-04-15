#ifndef UNION_FIND_H
# define UNION_FIND_H

typedef struct	s_node
{
	struct s_node *parent;
	void          *data;
}               t_node;

#endif
