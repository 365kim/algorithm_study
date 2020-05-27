/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baekjoon_10814_age_sorting.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 12:20:24 by mihykim           #+#    #+#             */
/*   Updated: 2020/05/27 17:12:17 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_member
{
	int age;
	char name[104];
}              t_member;

t_member member[100001];
t_member note[100001];

void swap(char *a, char *b)
{
	char *temp;

	temp = a;
	a = b;
	b = temp;
}

void merge_sort(t_member *member, int start, int end, t_member *note)
{
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	if (start >= end)
		return ;
	merge_sort(member, start, mid, note);
	merge_sort(member, mid + 1, end, note);
	while (k <= end)
	{
		if (j > end)
			note[k++] = member[i++];
		else if (i > mid)
			note[k++] = member[j++];
		else if (member[i].age <= member[j].age)
			note[k++] = member[i++];
		else
			note[k++] = member[j++];
	}
	for (i = start ; i <= end ; i++)
		member[i] = note[i];
}

int main(void)
{
	int size;
	int i;
	
	scanf("%d", &size);
	for (i = 0 ; i < size ; i++)
	{
		scanf("%d", &member[i].age);
		scanf("%s", member[i].name);
	}
	merge_sort(member, 0, size - 1, note);
	for (i = 0 ; i < size ; i++)
		printf("%d %s\n", member[i].age, member[i].name);
	return (0);
}
