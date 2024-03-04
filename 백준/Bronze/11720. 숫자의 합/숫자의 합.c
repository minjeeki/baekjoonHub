#include <stdio.h>
#include <string.h>

int main(void)
{
    int N = 0, res = 0;
    char numbers[101] = {0};

    scanf("%d", &N);
    getchar();
    scanf("%s", numbers);
    for (int idx=0; idx<N; idx++)
        res += (numbers[idx] - '0');    // 문자형에 대해서 사칙 연산을 할 경우 정수형의 결과가 나옴
    printf("%d", res);
    return 0;
}