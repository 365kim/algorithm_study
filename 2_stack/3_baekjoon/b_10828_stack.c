#include "stdlib.h"
#include "stdio.h"

/*
** - Process commands from stdin, after implementing a stack that stores integers.
** - The first number from stdin specifies the number of commands following afterward.
** - There are 5 commands as below.
**		1) push X	: Store a new element on the stack.
**		2) pop		: Print the top element from the stack after removing it.
**                Print -1, if there is no integer to print out.
**		3) size	: Print the number of integers that the stack has.
**		4) empty	: Print 1, if the stack is empty. Otherwise, print 0.
**		5) top		: Print the top element of the stack, without removing it.
*/

# define MAX_SIZE 10000 

typedef struct		s_stack

{
	unsigned int	max_size;
	int				top;
	int				*data;
}					t_stack;

t_stack	*stack_init(unsigned int max_size)
{
	t_stack		*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == 0)
		return (0);
	stack->max_size = max_size;
	stack->top = -1;
	stack->data = malloc(sizeof(int) * max_size);
	if (stack->data == 0)
	{
		free(stack);
		return (0);
	}
	return (stack);
}

void	stack_push(t_stack *stack, int data)
{
	if (stack->top < -1 ||
			(unsigned int)stack->top + 1 >= stack->max_size)
		return ;
	stack->top++;
	(stack->data)[stack->top] = data;
}

void	stack_pop(t_stack *stack)
{
	int	storage;

	if (stack->top < 0)
	{
		printf("-1\n");
		return ;
	}
	storage = stack->data[stack->top];
	stack->data[stack->top] = 0;
	stack->top--;
	printf("%d\n", storage);
}

void	stack_size(t_stack *stack)
{
	printf("%d\n", stack->top + 1);
}

void	is_empty(t_stack *stack)
{
	if (stack->top < 0)
		printf("1\n");
	else
		printf("0\n");
}

void	stack_peek(t_stack *stack)
{
	if (stack->top < 0)
		printf("-1\n");
	else
		printf("%d\n", stack->data[stack->top]);
}

int		main(void)
{
	t_stack			*stack;
	unsigned int	i = 0;
	unsigned int	n;
	char 			type[6];
	int				data;

	scanf("%d", &n);
	stack = stack_init(n);
	while (i < n)
	{
		scanf("%s", type);
		if (type[1] == 'u')
		{
			scanf("%d", &data);
			stack_push(stack, data);
		}
		else if (type[0] == 'p')
			stack_pop(stack);
		else if (type[1] == 'i')
			stack_size(stack);
		else if (type[1] == 'm')
			is_empty(stack);
		else if (type[1] == 'o')
			stack_peek(stack);
		i++;
	}
	return (0);
}
