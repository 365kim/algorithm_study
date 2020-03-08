#include "b1546_aver.h"

/*
**
*/

int		main(void)
{
	int		n;
	int		i;
	int		value;
	t_node	*begin_list;
	t_node	*curr;


	scanf("%d", &n);
	while (n < 1)
		printf("잘못된 입력입니다. 시험 본 과목의 개수를 정확히 입력해 주세요");
	i = 0;
	while (i < n)
	{
		scanf("%d", &value);
		if (value >= 0)
		{
			list_add_last(&begin_list, value);
			i++;
		}
		else
			printf("점수를 정확히 입력해주세요");
	}
	i = 0;

}
