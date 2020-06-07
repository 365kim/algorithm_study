#include <stdio.h>
#include <string.h>

# define BASE 302
# define BIG_PRIME 1000000007

char text[1000001];
char pattern[1000001];
int result[1000000];

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

long long get_next_hash(long long hash, char *text, int len, int i)
{
	hash -= text[i - 1] * ft_exp(BASE, len - 1);
	if ((hash %= BIG_PRIME) < 0)
		hash += BIG_PRIME;
	hash = ((hash * BASE) + text[i + len - 1]) % BIG_PRIME;
	return (hash);
}

int main(void)
{
	long long hash_text, hash_pattern;
	int len_text, len_pattern;
	int count, i, k = 0;

	scanf("%[^\n]s", text);
	getchar();
	scanf("%[^\n]s", pattern);
	len_text = strlen(text);
	len_pattern = strlen(pattern);
	if (len_text < len_pattern)
	{
		printf("0\n");
		return (0);
	}
	hash_text = get_hash(text, len_pattern);
	hash_pattern = get_hash(pattern, len_pattern);
	if (hash_text == hash_pattern)
		result[k++] = 1;
	for (i = 1; i + len_pattern <= len_text; i++)
	{
		hash_text = get_next_hash(hash_text, text, len_pattern, i);
		if (hash_text == hash_pattern)
			result[k++] = i + 1;
	}
	printf("%d\n", k);
	for (i = 0; i < k; i++)
		printf("%d\n", result[i]);
	return (0);
}
