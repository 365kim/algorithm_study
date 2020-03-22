/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_04949_balanced_world.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 22:00:17 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/22 21:25:35 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
** - Decide whether the given string from stdin is "Balanced".
** - Balanced Strings :
**			"()".
**			"[ first in ] ( first out )".
**			" ."
** - Print "yes" if the given string is balanced, or "no" if it is not.
** - The string consists of alphabets, '()', and '[]'.
** - The program is ended by a single fullstop '.'.
** - The length of the string is no greater than 100.
*/

typedef struct		s_stack
{
	struct s_node	*top;
	int				size;
}					t_stack;

typedef	struct		s_node
{
	char			data;
	struct s_node	*next;
}					t_node;

t_node	*create_elem(char data)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->data = data;
	node->next = NULL;
	return (node);
}

t_stack	*init_stack(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->size = 0;
	stack->top = create_elem('\0');
	return (stack);
}

void	stack_push(t_stack *stack, char data)
{
	t_node *node;

	node = create_elem(data);
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

char	stack_pop(t_stack *stack, char data)
{
	if (stack->size < 1
			|| (data == ')' && stack->top->data != '(')
			|| (data == ']' && stack->top->data != '['))
		return ('n');
	stack->top = stack->top->next;
	stack->size--;
	return ('y');
}

void	print_res(t_node *node)
{
	if (node->next)
		print_res(node->next);
	if (node->data == 'y')
		printf("yes\n");
	else if (node->data == 'n')
		printf("no\n");
}

int		main(void)
{
	t_stack	*stack;
	t_stack	*res;
	size_t	n;
	char	*str;
	char	c;
	int		i;
	
	res = init_stack();
	str = malloc(sizeof(char) * 100);
	while (1)
	{
		stack = init_stack();
		c = 'y';
		getline(&str, &n, stdin);
		if (str[0] == '.')
		{
			free(stack);
			break;
		}
		i = 0;
		while (str[i])
		{
			if (str[i] == '(' || str[i] == '[')
				stack_push(stack, str[i]);
			else if (str[i] == ')' || str[i] == ']')
			{
				c = stack_pop(stack, str[i]);
				if (c == 'n')
					break;
			}	
			i++;
		}
		if (stack->size > 0)
			c = 'n';
		stack_push(res, c);
		free(stack);
	}
	print_res(res->top);
	free(res);
	free(str);
	return (0);
}
