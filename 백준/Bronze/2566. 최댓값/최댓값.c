#include <stdio.h>

int main(void)
{
	int num_line[9] = {0};
	int max_info[3] = {-1, 0, 0};	// 최댓값, 행 번호, 열번호

	for (int row=0; row<9; row++)
	{
		for (int col=0; col<9; col++)
		{
			scanf("%d", &num_line[col]);
			getchar();
			if (max_info[0] <= num_line[col])
			{
				max_info[0] = num_line[col];
				max_info[1] = row + 1;
				max_info[2] = col + 1;
			}
		}
	}
	printf("%d\n%d %d", max_info[0], max_info[1], max_info[2]);
	return 0;
}