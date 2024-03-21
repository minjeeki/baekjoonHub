#include <stdio.h>

int find_max_line(int line1, int line2, int line3)
{
	int max_line = 0;
	if (max_line < line1)
		max_line = line1;
	if (max_line < line2)
		max_line = line2;
	if (max_line < line3)
		max_line = line3;
	return max_line;
}

int check_triangle(int line1, int line2, int line3, int max_line)
{
	if (max_line == line1)
		return ((line1 >= (line2 + line3)) ? 0 : 1);
	else if (max_line == line2)
		return ((line2 >= (line1 + line3)) ? 0 : 1);
	else if (max_line == line3)
		return ((line3 >= (line1 + line2)) ? 0 : 1);
	else
		return 0;
}

int main(void)
{
	int line1 = 1, line2 = 1, line3 = 1;
	int max_line = 0, is_triangle = 1;
	while (1)
	{
		scanf("%d %d %d", &line1, &line2, &line3);
		getchar();
		if (line1 == 0 && line2 == 0 && line3 == 0)
			break;
		max_line = find_max_line(line1, line2, line3);
		is_triangle = check_triangle(line1, line2, line3, max_line);
		if (!is_triangle)
			printf("Invalid\n");
		else
		{
			if (line1 == line2 && line1 == line3)
				printf("Equilateral\n");
			else if (line1 == line2 || line1 == line3 || line2 == line3)
				printf("Isosceles\n");
			else
				printf("Scalene\n");
		}
	}
	return 0;
}