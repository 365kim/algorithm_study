/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hash.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:29:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/31 20:10:43 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabin_karp.h"

long long	get_hash(const char *str, unsigned int len)
{
	long long		hash;
	unsigned int	i;
	unsigned int	s_len;

	if (str == NULL)
		return (0);
	s_len = strlen((char *)str);
	len = s_len < len ? s_len : len;
	hash = 0;
	i = 0;
	while (i < len)
	{
		hash = (hash * BASE) + str[i];
		hash = hash % BIG_PRIME;
		i++;
	}
	return (hash);
}
