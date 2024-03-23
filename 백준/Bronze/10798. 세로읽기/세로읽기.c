#include <stdio.h>

int main(void)
{
	char matrix[5][15] = {0};

	for (int row=0; row<5; row++)
	{
		scanf("%s", matrix[row]);
		getchar();
	}
	for (int col2=0; col2<15; col2++)
	{
		for (int row2=0; row2<5; row2++)
		{
			if (matrix[row2][col2] != 0)
				printf("%c", matrix[row2][col2]);
		}
	}
	return 0;
}