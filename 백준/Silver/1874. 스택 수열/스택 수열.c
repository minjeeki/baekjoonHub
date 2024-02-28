#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int	N = 0;
	int target_arr[100000] = {0};
	int idx_t = 0;
	int stack[100000] = {0};
	int num_into_stack = 1;
	int top = 0;
	char result_arr[200001] = {0};
	int idx_r = 0;
	int len_r = 0;

	scanf("%d", &N);
	getchar();
	for (int i=0; i<N; i++)
	{
		scanf("%d", &target_arr[i]);
		getchar();
	}
	stack[top] = num_into_stack;
	num_into_stack++;
	result_arr[idx_r] = '+';
	idx_r++;
	while (idx_t < N)
	{
		if (stack[top] < target_arr[idx_t])
		{
			top++;
			stack[top] = num_into_stack;
			num_into_stack++;
			result_arr[idx_r] = '+';
			idx_r++;
		} else if (stack[top] == target_arr[idx_t])
		{
			stack[top] = 0;
			if (top > 0)
				top--;		// 해당 조건 안걸면 top이 -1인 상황 발생
			idx_t++;
			result_arr[idx_r] = '-';
			idx_r++;
		} else
		{
			printf("NO\n");
			return (0);
		}
	}
	len_r = strlen(result_arr);
	for (int j=0; j<len_r; j++)
		printf("%c\n", result_arr[j]);
}


/*
## 두번째 로직 및 의사 코드 작성
1. n 입력 받기
2. n회 돌면서 목표 수열 만들기
	* (while문에 들어갈 조건 하나 빼는 용도로 사용해도 괜찮을지도 / 기본 구현 후 구현하고 평균 소요 시간 비교)
		직전 입력 수보다 입력할 수가 더 큰 경우(오른 차순) 중 현재 수열 내 max값보다 작을 경우 NO 출력 준비
3. stack & 출력 결과 문자열 구현 후 목표 숫자값과 비교해서 push, pop, NO 출력
	* stack[top] < 목표 숫자 : push
	* stack[top] == 목표 숫자 : pop & 다음 목표 숫자로 넘어가기
	* stack[top] > 목표 숫자 : NO, 반복문 중단, 결과 출력
4. 반복문 정상 출력 시 출력 결과 수열 보면서 +, - 출력 후 종료
*/