/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <jko@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 21:49:03 by jko               #+#    #+#             */
/*   Updated: 2020/05/31 23:36:48 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"
#include <stdio.h>

int cmp(void *a, void *b)
{
		return (*(int *)a - *(int *)b);
}

void free_data(void *a)
{
		printf("free %d\n", *(int *)a);
}

int main(void)
{
	int nums[31];
	for (int i = 0; i < 31; ++i) {
		nums[i] = i;
	}


	printf("\n--- init ---------------------------------\n");

	t_hash_set *set = set_init(cmp);
	printf("size = %d\n", set->size);


	printf("\n\n--- random test : insert ---------------------------------\n");

	printf("insert %d = %d\n", nums[5], set_insert(set, &nums[5], sizeof(int)));
	printf("size = %d\n", set->size);
	printf("exists = %d\n\n", set_exists(set, &nums[5], sizeof(int)));

	printf("insert %d = %d\n", nums[1], set_insert(set, &nums[1], sizeof(int)));
	printf("size = %d\n", set->size);
	printf("exists = %d\n\n", set_exists(set, &nums[1], sizeof(int)));

	printf("insert %d = %d\n", nums[6], set_insert(set, &nums[6], sizeof(int)));
	printf("size = %d\n", set->size);
	printf("exists = %d\n\n", set_exists(set, &nums[6], sizeof(int)));

	printf("insert %d = %d\n", nums[14], set_insert(set, &nums[14], sizeof(int)));
	printf("size = %d\n", set->size);
	printf("exists = %d\n\n", set_exists(set, &nums[14], sizeof(int)));

	printf("insert %d = %d\n", nums[30], set_insert(set, &nums[30], sizeof(int)));
	printf("size = %d\n", set->size);
	printf("exists = %d\n\n", set_exists(set, &nums[30], sizeof(int)));


	printf("\n\n--- random test : delete ---------------------------------\n");

	int *t;

	t = &nums[5];
	printf("%d -> exists = %d, delete = %d\t", *t, set_exists(set, t, sizeof(int)), set_delete(set, t, sizeof(int), free_data));
	printf("size = %d\n", set->size);

	t = &nums[1];
	printf("%d -> exists = %d, delete = %d\t", *t, set_exists(set, t, sizeof(int)), set_delete(set, t, sizeof(int), free_data));
	printf("size = %d\n", set->size);

	t = &nums[6];
	printf("%d -> exists = %d, delete = %d\t", *t, set_exists(set, t, sizeof(int)), set_delete(set, t, sizeof(int), free_data));
	printf("size = %d\n", set->size);

	t = &nums[14];
	printf("%d -> exists = %d, delete = %d\t", *t, set_exists(set, t, sizeof(int)), set_delete(set, t, sizeof(int), free_data));
	printf("size = %d\n", set->size);

	t = &nums[30];
	printf("%d -> exists = %d, delete = %d\t", *t, set_exists(set, t, sizeof(int)), set_delete(set, t, sizeof(int), free_data));
	printf("size = %d\n", set->size);

	free_set(set, free_data);


	printf("\n\n--- linear test : insert ---------------------------------\n");
	set = set_init(cmp);

	for (int i = 0; i < 20; ++i) {
			printf("insert %d = %d\n", nums[i], set_insert(set, &nums[i], sizeof(int)));
			printf("insert %d = %d\t", nums[i], set_insert(set, &nums[i], sizeof(int)));
			printf("size = %u\n", set->size);
	}

	printf("\n\n--- linear test : exists ---------------------------------\n");

	for (int i = 0; i < 31; ++i) {
		printf("exists %d = %d\n", nums[i], set_exists(set, &nums[i], sizeof(int)));
	}

	printf("\n\n--- linear test : delete ---------------------------------\n");

	for (int i = 0; i < 31; ++i) {
		t = &nums[i];
		printf("%d -> exists = %d, delete = %d\t", *t, set_exists(set, t, sizeof(int)), set_delete(set, t, sizeof(int), free_data));
		printf("size = %d\n", set->size);
	}

	printf("\n\n--- test : free ---------------------------------\n");
	free_set(set, free_data);
	set = 0;

	system("leaks a.out > leaks_result && cat leaks_result | grep leaked");
	return (0);
}
