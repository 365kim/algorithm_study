/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_04195_virtual_friends.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 15:47:45 by mihykim           #+#    #+#             */
/*   Updated: 2020/04/25 19:07:34 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Write a program that prints the number of people in the social network of
**   the two people who have just become friends, whenever a friendship is formed.
** - A name is a string of 1 to 20 letters (uppercase or lowercase)
** - Input will be like :
**			1                <= T : # of testcases
**			4                <= F : # of frendships formed
**			Fred Barney      <= (name) (name)
**			Betty Wilma
**			Betty Fred
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char name[200001][21];
int  parent[200000];
int  size[200000];
int  n;

int name_to_idx(char input[])
{
	int i = 0;

	while (i < n)
	{
		if (strcmp(input, name[i]) == 0)
			return (i);
		i++;
	}
	strcpy(name[i], input);
	return (n++);
}

int find(int i)
{
	if (i == parent[i])
		return (i);
	return (parent[i] = find(parent[i]));
}

int union_by_size(int a, int b)
{
	int tmp;

	if (a == b)
		return (size[a]);
	if (size[a] > size[b])
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	size[a] += size[b];
	parent[b] = a;
	return (size[a]);
}

void initialize(void)
{
	name[n][0] = '\0';
	name[n + 1][0] = '\0';
	size[n] = 1;
	size[n + 1] = 1;
	parent[n] = n;
	parent[n + 1] = n + 1;
}

int main(void)
{
	int t, f;
	int a, b;
	char name1[21], name2[21];

	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &f);
		n = 0;
		while(f--)
		{
			initialize();
			scanf("%s %s", name1, name2);
			a = name_to_idx(name1);
			b = name_to_idx(name2);
			printf("%d\n", union_by_size(find(a), find(b)));
		}
	}
	return (0);
}
