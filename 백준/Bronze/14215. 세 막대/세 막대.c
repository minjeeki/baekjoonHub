#include <stdio.h>

int main (void)
{
	int line[3] = {0};
	int max_line = 0, sum = 0;
	scanf("%d %d %d", &line[0], &line[1], &line[2]);
	getchar();
	for (int i=0; i<3; i++)
	{
		sum += line[i];
		if (max_line < line[i])
			max_line = line[i];
	}
	sum -= max_line;
	sum = (sum > max_line) ? (sum + max_line) : (sum + sum - 1);
	printf("%d", sum);
	return 0;
}