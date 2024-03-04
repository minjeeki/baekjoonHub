#include <stdio.h>
#include <string.h>
#define ALPHABET_NUM 26
#define SMALL_A 97

int main(void)
{
    char S[101] = {0};
    int alphabet_idx[ALPHABET_NUM];             //a의 아스키코드 10진값 97, z의 아스키코드 10진값 122
    int char_idx = 0;

    scanf("%s", S);
    for (int idx=0; idx<ALPHABET_NUM; idx++)    // 알파벳 인덱스 내부 값 -1로 초기화
        alphabet_idx[idx] = -1;
    for (int s_idx=0; s_idx<strlen(S); s_idx++) // 가장 처음 해당 알파벳 등장 시 인덱스 값 저장
    {
        char_idx = S[s_idx] - SMALL_A;
        if (alphabet_idx[char_idx] == -1)
            alphabet_idx[char_idx] = s_idx;
    }
    for (int print_idx=0; print_idx<ALPHABET_NUM; print_idx++) // int 배열 모두 출력
    {
        printf("%d", alphabet_idx[print_idx]);
        if (print_idx != (ALPHABET_NUM-1))
            printf(" ");
    }
    return 0;
}