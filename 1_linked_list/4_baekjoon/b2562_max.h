#ifndef B2562_MAX_H
# define B2562_MAX_H

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

typedef struct		s_answer
{
	int				index;
	int				value;
}					t_ans;

#endif
