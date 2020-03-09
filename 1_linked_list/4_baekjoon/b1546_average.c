#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node
{
	int				score;
	struct s_node	*next;
}					t_node;

/*
** - Print the adjusted average of each score of the given number('n') of subjects.
**   ( average' = average * 100 / max_score )
** - Margin of error within 10^-2 is allowed
*/

t_node			*create_elem(int score)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (node == 0)
		return (0);
	node->score = score;
	node->next = 0;
	return (node);
}

int				list_add_last(t_node **head, int score)
{
	int		i;
	t_node	*curr;
	t_node	*new;

	if (head == 0 || (new = create_elem(score)) == 0)
		return (-1);
	if (*head == 0)
	{
		*head = new;
		return (0);
	}
	curr = *head;
	i = 1;
	while (curr->next)
	{
		curr = curr->next;
		i++;
	}
	curr->next = new;
	return (i);
}

int				main(void)
{
	int		n;
	int		i;
	int		*value;
	int		max;
	int		sum;
	t_node	**head;
	t_node	*temp;
	t_node	*curr;

	head = malloc(sizeof(t_node *));
	*head = 0;
	n = 0;
	scanf("%d", &n);
	value = malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		value[i] = 0;
		scanf("%d", &value[i]);
		list_add_last(head, value[i]);
		i++;
	}
	curr = *head;
	max = 0;
	while (curr)
	{
		max = curr->score > max ? curr->score : max;
		curr = curr->next;
	}
	curr = *head;
	sum = 0;
	while (curr)
	{
		sum = sum + curr->score;
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	free(head);
	free(value);
	printf("%.2f", sum * 100.0 / max / n);
	return (0);
}
