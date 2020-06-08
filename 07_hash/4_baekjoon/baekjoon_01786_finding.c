/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_01786_finding.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 13:35:21 by mihykim           #+#    #+#             */
/*   Updated: 2020/06/08 13:35:24 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

# define BASE 31
# define BIG_PRIME 1234567891

char text[1000001];
char pattern[1000001];
int result[1000000] = {0};

long long get_hash(char *str, int len)
{
	long long hash = 0;
	int i;

	for (i = 0; i < len; i++)
		hash = ((hash * BASE) + str[i]) % BIG_PRIME;
	return (hash);
}

long long ft_exp(int base, int power)
{
	long long res = 1;
	int i;

	for (i = 0; i < power; i++)
		res *= base;
	return (res);
}

long long get_next_hash(long long hash, char *text, int len, int i, long long power)
{
	hash = hash - text[i - 1] * power;
	if ((hash %= BIG_PRIME) < 0)
		hash += BIG_PRIME;
	hash = ((hash * BASE) + text[i + len - 1]) % BIG_PRIME;
	return (hash);
}

int main(void)
{
	long long hash_text, hash_pattern;
	long long power;
	int len_text, len_pattern;
	int i, count = 0;

	scanf("%[^\n]s", text);
	getchar();
	scanf("%[^\n]s", pattern);
	len_text = strlen(text);
	len_pattern = strlen(pattern);
	if (len_text < len_pattern || len_text == 0 || len_pattern == 0)
	{
		printf("0\n");
		return (0);
	}
	hash_text = get_hash(text, len_pattern);
	hash_pattern = get_hash(pattern, len_pattern);
	if (hash_text == hash_pattern)
		result[count++] = 1;
	power = ft_exp(BASE, len_pattern - 1);
	for (i = 1; i + len_pattern <= len_text; i++)
	{
		hash_text = get_next_hash(hash_text, text, len_pattern, i, power);
		if (hash_text == hash_pattern)
			result[count++] = i + 1;
	}
	printf("%d\n", count);
	for (i = 0; i < count; i++)
		printf("%d\n", result[i]);
	return (0);
}
