#include <stdio.h>
#include <string.h>
#define SENTENCE_MAX 1001
#define WORD_MAX 21

int main(void)
{
	int		test_case = 0;
	char	sentence[SENTENCE_MAX] = {0};
	char	word[WORD_MAX] = {0};
	int		s_len, s_idx, w_idx = 0;
	
	scanf("%d", &test_case);
	getchar();
	for (int t_idx; t_idx<test_case; t_idx++)
	{
		fgets(sentence, sizeof(sentence) * 1, stdin);
		s_len = strlen(sentence);
		sentence[s_len-1] = 0;
		s_len--;
		while (s_idx < s_len)
		{
			while (s_idx < s_len && sentence[s_idx] != ' ')
			{
				word[w_idx] = sentence[s_idx];
				w_idx++;			// 정상적으로 문자를 받고 0을 가리키고 종료
				s_idx++;			// 정상적으로 문자를 받고 공백 또는 0을 가리키고 종료
			}
			if (strlen(word) != 0)
			{
				w_idx--;
				while (w_idx >= 0)
				{
					printf("%c", word[w_idx]);
					word[w_idx] = 0;
					w_idx--;
				}
				w_idx = 0;			// w_idx를 계속 빼다보면 인덱스 0 값 출력 후 -1이 되기에 맞춰줌
			}
			if (sentence[s_idx] == ' ')
			{
				printf("%c", sentence[s_idx]);
				s_idx++;
			}
		}
		printf("\n");
		s_idx = 0;
	}
	return (0);
}