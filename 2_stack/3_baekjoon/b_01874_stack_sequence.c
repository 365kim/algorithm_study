/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_01874_stack_sequence.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 14:59:34 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/20 14:47:37 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
** - Determine whether the given sequence can be possibly made by the following rule.
**   1) You can push natural numbers from 1 in ascending order.
**   2) You cannot push the number you already pushed or popped.
**   3) Each element of sequence can only be added when pop.
**   So, if you cannot get the element of the given sequence by push or pop, it's impossible case
** - Print '+' when push, and '-' when pop, if the sequence is possible to be made.
**   Otherwise, print "NO"
** - The first number from stdin specifies the number of commands following afterward.
*/

int	input[100000] = {0};
char	res[200000] = "";

/*
*** sp : stack_pointer
*/

void	push(int **sp, int n)
{
	(*sp)++;
	**sp = n;
}

int		pop(int **sp)
{
	int tmp = **sp;
	**sp = 0;
	--(*sp);
	return (tmp);
}

int		main(void)
{
	int n;
	int	value;
	int i = 0;
	int	j;
	int k = 0;
	int	*sp;

	scanf("%d", &n);
	while (i < n)
	{
		scanf("%d", &value);
		input[i] = value;
		i++;
	}
	sp = malloc(sizeof(int) * n);
	i = 0;
	j = 1;
	while (i < n)
	{
		while (j <= input[i])
		{
			push(&sp, j);
			res[k++] = '+';
			res[k++] = '\n';
			j++;
		}
		if (pop(&sp) != input[i])
		{
			res[k] = '\0';
			printf("NO");
			return (0);
		}
		res[k++] = '-';
		res[k++] = '\n';
		i++;
	}
	res[k] = '\0';
	printf("%s", res);
	return (0);
}
