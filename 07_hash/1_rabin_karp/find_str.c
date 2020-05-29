/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:29:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/29 13:51:20 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabin_karp.h"

char		*find_str(const char *haystack, const char *needle)
{
	t_struct		t_needle;
	t_struct		t_haystack;
	unsigned int	i;
	unsigned int	j;

	if (needle == NULL
			|| (t_needle.len = strlen(needle)) == 0)
		return ((char *)haystack);
	if (haystack == NULL
			|| ((t_haystack.len = strlen(haystack)) < t_needle.len))
		return (NULL);
	t_needle.hash = get_hash(needle, t_needle.len);
	i = 0;
	while (i + t_needle.len < t_haystack.len)
	{
		t_haystack.hash = get_hash(&haystack[i], t_needle.len);
		if (t_needle.hash == t_haystack.hash)
		{
			j = 0;
			while (j < t_needle.len && haystack[i + j] == needle[j])
				j++;
			if (j == t_needle.len)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
