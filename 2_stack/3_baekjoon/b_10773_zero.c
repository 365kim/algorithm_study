#include "stdlib.h"
#include "stdio.h"

/*
** - Get integers from stdin and store it, if the given integer is natural number.
**   Or, remove the latest stored one if the given integer is ZERO.
** - The first number from stdin specifies the number of integers following afterward.
*/

# define MAX_SIZE 100000 

typedef struct		s_stack
{
	unsigned int	max_size;
	int				top;
	unsigned int	*data;
}					t_stack;

t_stack	*stack_init(unsigned int max_size)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->max_size = max_size;
	stack->top = -1;
	stack->data = malloc(sizeof(int) * max_size);
	return (stack);
}

void	stack_push(t_stack *stack, unsigned int data)
{
	stack->top++;
	stack->data[stack->top] = data;
}

void	stack_pop(t_stack *stack)
{
	if (stack->top < 0)
		return ;
	stack->data[stack->top] = 0;
	stack->top--;
}

void	print_stack_sum(t_stack *stack)
{
	unsigned int sum = 0;

	while (stack->top > -1)
	{
		sum += stack->data[stack->top];
		stack->top--;	
	}
	printf("%d", sum);
}

int		main(void)
{
	t_stack			*stack;
	unsigned int	n;
	unsigned int	i = 0;
	unsigned int	data;

	scanf("%d", &n);
	stack = stack_init(n);
	while (i < n)
	{
		scanf("%d", &data);
		if (data == 0)
			stack_pop(stack);
		else
			stack_push(stack, data);
		i++;
	}
	print_stack_sum(stack);
}
