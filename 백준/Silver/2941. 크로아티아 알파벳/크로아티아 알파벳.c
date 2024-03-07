#include <stdio.h>
#include <string.h>

int check_double(char *word, int idx)
{
	if (word[idx] == 'c')
	{
		if (word[idx+1] == '=' || word[idx+1] == '-')
			return 1;
		else
			return 0;
	}
	else if (word[idx] == 'd')
		if (word[idx+1] == '-')
			return 1;
		else
			return 0;
	else if (word[idx] == 'l')
		if (word[idx+1] == 'j')
			return 1;
		else
			return 0;
	else if (word[idx] == 'n')
		if (word[idx+1] == 'j')
			return 1;
		else
			return 0;
	else if (word[idx] == 's')
		if (word[idx+1] == '=')
			return 1;
		else
			return 0;
	else if (word[idx] == 'z')
		if (word[idx+1] == '=')
			return 1;
		else
			return 0;
	else
		return 0;
}

int main(void)
{
	char word[101] = {0};
	int idx = 0, res_cnt = 0;

	scanf("%s", word);
	while (word[idx] != 0)
	{
		if (check_double(word, idx))
			idx++;
		else if (word[idx] == 'd' && word[idx+1] == 'z' && word[idx+2] == '=')
			idx += 2;
		idx++;
		res_cnt++;
	}
	printf("%d", res_cnt);
	return 0;
}