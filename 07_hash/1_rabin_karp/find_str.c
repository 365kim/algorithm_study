/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:29:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 15:42:30 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabin_karp.h"

static long long	ft_exp(int base, int power)
{
	long long	res;
	int			i;

	if (power == 0)
		return (1);
	i = 1;
	res = base;
	while (i < power)
	{
		res *= base;
		i++;
	}
	return (res);
}

char				*find_str(const char *haystack, const char *needle)
{
	t_struct		t_needle;
	t_struct		t_haystack;
	unsigned int	i;

	if (needle == NULL
			|| (t_needle.len = strlen(needle)) == 0)
		return ((char *)haystack);
	if (haystack == NULL
			|| ((t_haystack.len = strlen(haystack)) < t_needle.len))
		return (NULL);
	t_needle.hash = get_hash(needle, t_needle.len);
	t_haystack.hash = get_hash(haystack, t_needle.len);
	if (t_needle.hash == t_haystack.hash)
		return ((char *)haystack);
	i = 1;
	while (i + t_needle.len < t_haystack.len)
	{
		t_haystack.hash -= haystack[i - 1] * ft_exp(BASE, t_needle.len - 1);
		if ((t_haystack.hash %= OPERAND) < 0)
			t_haystack.hash += OPERAND;
		t_haystack.hash *= BASE;
		t_haystack.hash %= OPERAND;
		t_haystack.hash += haystack[i + t_needle.len - 1];
		t_haystack.hash %= OPERAND;
		if (t_needle.hash == t_haystack.hash)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
