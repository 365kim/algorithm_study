/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_09012_parenthesis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 21:43:26 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/18 22:18:17 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
** - Decide whether the given string from stdin is VPS(Valid Parenthesis String).
** - Examples
**		"()"	: Valid
**		"()()"	: Valid
**		"(())"	: Valid
**		"("		: Inalid
**		"())"	: Inalid
** - Print "YES" if the string is VPS, or "NO" if it is not.
** - The first number from stdin specifies the number of strings following after.
** - The length of the string is greater than 1 but, not more than 50.
*/

# define YES 1
# define NO 0

typedef struct		s_stack
{
	unsigned int	max_size;
	int				top;
	char			*data;
}					t_stack;

t_stack	*init_stack(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->max_size = 50;
	stack->top = -1;
	stack->data = malloc(sizeof(char) * 50);
	return (stack);
}

void	stack_push(t_stack *stack)
{
	stack->top++;
	stack->data[stack->top] = '(';
}

int		stack_pop(t_stack *stack)
{
	if (stack->top < 0 || stack->data[stack->top] != '(')
		return (NO);
	stack->data[stack->top] = '\0';
	stack->top--;
	return (YES);
}

int		ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

int		main(void)
{
	int		n;
	int		i;
	int		m;
	int 	j;
	int		*res;
	char	str[50] = "";
	t_stack	*stack;

	scanf("%d", &n);
	res = malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		scanf("%s", str);
		m = ft_strlen(str);
		stack = init_stack();
		j = 0;
		res[i] = YES;
		while (j < m)
		{
			if (str[j] == '(')
				stack_push(stack);
			else if (str[j] == ')')
				res[i] = stack_pop(stack);
			if (res[i] == NO)
				break ;
			j++;
		}
		if (stack->top > -1)
			res[i] = NO;
		free(stack);
		i++;
	}
	i = 0;
	while (i < n)
	{
		res[i] == YES ? printf("YES\n") : printf("NO\n");
		i++;
	}
	free(res);
}
