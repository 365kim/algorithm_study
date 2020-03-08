#ifndef B1546_AVER_H
# define B1546_AVER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				score;
	struct s_node	*next;
}					t_node;

typedef struct		s_answer
{
	int				index;
	int				value;
}					t_ans;


#endif
