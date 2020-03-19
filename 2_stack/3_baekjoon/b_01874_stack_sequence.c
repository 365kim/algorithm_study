/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_01874_stack_sequence.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 14:59:34 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/19 15:36:50 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	seq[100000];
int	stack[10000];

int *sp;

#define	push(sp, n)	(*((sp))++) = (n))
#define	pop(sp)		(*--(sp))

{
	sp = stack;

	push(sp, 10);
	x = pop(sp);
}

int		main(void)
{
	int n;
	int	value;
	int i = 0;

	scanf("%d", &n);
	while (i < n)
	{
		scanf("%d", &value);
		seq[i] = value;
		i++;
	}

	printf("NO");
	return (0);
}
