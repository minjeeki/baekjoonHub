#include <stdio.h>
#include <string.h>

int main(void)
{
	int word_cnt = 0;
	int group_word_cnt = 0;

	// 단어의 개수 N개 입력 받기
	scanf("%d", &word_cnt);
	getchar();
	// 단어의 개수만큼 입력 받고 그룹단어인지 판단하기
	for (int i=0; i<word_cnt; i++)
	{
		char word[101] = {0};						// 입력 받을 단어
		char char_stack[101] = {0};					// 단어에 존재하는 문자를 담을 stack
		int stack_top = 0;							// stack의 top index
		int is_group_wrd = 1;						// 해당 단어가 그룹 단어인지 체크할 마커

		// 단어 입력 받기 & stack에 첫번째 단어 넣기
		scanf("%s", word);
		char_stack[0] = word[0];
		// 단어의 인덱스 1부터 끝까지 돌면서 확인
		for (int idx=1; idx < strlen(word); idx++)
		{
			// 현재 확인할 문자가 stack에 존재하는지 확인 (존재하지 않을 경우 NULL 반환)
			char *ptr = strchr(char_stack, word[idx]);
			// stack 내 현재 해당 문자 없음
			if (ptr == 0)							// 현재 문자가 stack에 없음 => stack top에 추가
			{
				stack_top++;
				char_stack[stack_top] = word[idx];
			}
			else									// 현재 문자가 stack에 존재함
			{
				int char_idx = ptr - char_stack;	// stack 내  해당 문자의 idx 확인 -> top 위치보다 아래라면 종료
				if (char_idx < stack_top)
				{
					is_group_wrd = 0;
					break;
				}
			}
		}
		if (is_group_wrd)							// for문을 모두 돌고 is_group_wrd가 1이라면 결과에 1 추가
			group_word_cnt++;
	}
	printf("%d", group_word_cnt);
	return 0;
}