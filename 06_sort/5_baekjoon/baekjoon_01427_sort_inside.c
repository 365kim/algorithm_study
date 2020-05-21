/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01427_sort_inside.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 13:58:54 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/21 14:46:48 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Libarary Sort Functions (man qsort)
**
** int
** heapsort(void *base, size_t nel, size_t width, 
**            int (*compar)(const void *, const void *));
** int
** mergesort(void *base, size_t nel, size_t width,
**            int (*compar)(const void *, const void *));
** void
** qsort(void *base, size_t nel, size_t width,
**            int (*compar)(const void *, const void *));
**
** base   : array to be sorted
** nel    : number of elements
** width  : size of each element
** compar : comparison function
*/

int compare(const void *va, const void *vb)
{
	char a = *(char *)(va);
	char b = *(char *)(vb);

	if (a > b)
		return (-1);
	if (a < b)
		return (1);
	return (0);
}

int main(void)
{
	char n[11];

	scanf("%s", n);
	qsort(n, strlen(n), sizeof(char), compare);
	printf("%s", n);
	return (0);
}
