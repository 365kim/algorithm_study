/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_15829_hashing.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 15:22:49 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/02 15:42:02 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

# define BASE 31
# define BIG_PRIME 1234567891

int	main(void)
{
	int			len;
	char		str[51];
	long long	hash = 0;

	scanf("%d", &len);
	scanf("%s", str);
	hash = 0;
	for (int i = 0; i < len; i++)
	{
		hash = hash * BASE + (str[len - 1 - i] - 'a' + 1);
		hash %= BIG_PRIME;
	}
	printf("%lld\n", hash);
	return (0);
}
