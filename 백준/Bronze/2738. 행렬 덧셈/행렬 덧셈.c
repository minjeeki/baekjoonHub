#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0, m = 0;
	int **matrix;

	scanf("%d %d", &n, &m);
	getchar();
	matrix = (int **)malloc(n * sizeof(int *));
	if (!matrix)
		return 1;
	for (int i=0; i<n; i++)
	{
		matrix[i] = (int *)malloc(m * sizeof(int));
		if (!matrix[i])
		{
			free(matrix);
			return 1;
		}
	}
	for (int row1=0; row1<n; row1++)
	{
		for (int col1=0; col1<m; col1++)
		{
			scanf("%d", &matrix[row1][col1]);
			getchar();
		}
	}
	for (int row1=0; row1<n; row1++)
	{
		int plus_num = 0;
		for (int col2=0; col2<m; col2++)
		{
			scanf("%d", &plus_num);
			getchar();
			matrix[row1][col2] += plus_num;
		}
	}
	for (int row3=0; row3<n; row3++)
	{
		int plus_num = 0;
		for (int col3=0; col3<m; col3++)
		{
			printf("%d", matrix[row3][col3]);
			if (col3 < m-1)
				printf(" ");
		}
		if (row3 < n-1)
			printf("\n");
	}
	free(matrix);
	return 0;
}