/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rabin_karp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:29:56 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/29 12:04:49 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RABIN_KARP_H
# define RABIN_KARP_H

#include <string.h>

# define BASE 302
# define OPERAND 1000000007

typedef struct	s_struct
{
	unsigned int	len;
	long long		hash;
}				t_struct;

long long	get_hash(const char *str, unsigned int len);
char		*find_str(const char *haystack, const char *needle);

#endif
