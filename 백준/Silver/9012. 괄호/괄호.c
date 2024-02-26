#include <stdio.h>
#include <string.h>
#define ARRAY_MAX 101

int main(void)
{
	int test_case = 0;

	scanf("%d", &test_case);
	getchar();
	for (int t=0; t<test_case; t++)
	{
		char arr_input[ARRAY_MAX] = {0};
		char arr_stack[ARRAY_MAX] = {0};
		int	print_point = 0; // 0 - 중간에 결과 도출 X, 1 - 중간에 결과 도출 & NO 출력 필요
		int len_input = 0;
		int	top_stack = -1;

		fgets(arr_input, sizeof(arr_input) * 1, stdin);
		len_input = strlen(arr_input);
		arr_input[len_input-1] = 0;
		len_input--;
		for (int i=0; i<len_input; i++)
		{
			if (arr_input[i] == '(')
			{
				top_stack++;
				arr_stack[top_stack] = arr_input[i];
			}
			else
			{
				if (top_stack >= 0)
				{
					arr_stack[top_stack] = 0;
					top_stack--;
				}
				else
				{
					print_point = 1;
					break;
				}
			}
		}
		if (print_point == 0)
		{
			if (strlen(arr_stack) == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return (0);
}

/* 로직 짜기
1. scanf로 테스트 케이스 T개 받기 & getchar()로 개행 문자 버퍼에서 제거
2. 테스트 케이스만큼 반복문 실행
3. 괄호 담을 스택 배열 및 입력 받을 스택 배열 생성
4. fgets() 함수로 한줄 입력 받고, 입력 배열 돌면서 문자 처리
4-1. ( 문자일 경우 stack에 넣기
4-2. ) 문자일 경우 stack에 있는 ( 문자 제거 (제거할 문자가 없으면 NO 출력 후 반복문 중단)
4-3. 반복문을 다 돌고 stack에 ( 문자가 남아있을 경우 NO 출력, 남은 것이 없을 경우 YES 출력
*/