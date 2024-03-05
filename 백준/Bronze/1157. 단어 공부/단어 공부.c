#include <stdio.h>
#include <string.h>
#define ALPHA_NUM 26

int main(void)
{
    char word[1000001] ={0};
    int big_alpha_idx[ALPHA_NUM];
    int len_word = 0, char_ascii = 0, max_value = 0, has_same_max = 0, max_idx = 0;

    scanf("%s", word);
    // int 배열 초기화
    for (int i=0; i<ALPHA_NUM; i++)
        big_alpha_idx[i] = 0;
    len_word = strlen(word);
    // word에 존재하는 알파벳 개수 세기
    for (int idx=0; idx<len_word; idx++)
    {
        if (word[idx] - 'a' >= 0)
            char_ascii = word[idx] - 'a';
        else
            char_ascii = word[idx] - 'A';
        big_alpha_idx[char_ascii]++;
    }
    // big_alpha_idx 내 최댓값 찾기
    max_value = big_alpha_idx[0];
    max_idx = 0;
    for (int alpha_idx=0; alpha_idx<ALPHA_NUM; alpha_idx++)
    {
        if (max_value < big_alpha_idx[alpha_idx])
        {
            max_value = big_alpha_idx[alpha_idx];
            max_idx = alpha_idx;
        }
    }
    // 최댓값과 동일한 값이 있는지 확인하기
    for (int same_idx=0; same_idx<ALPHA_NUM; same_idx++)
    {
        if (max_value == big_alpha_idx[same_idx])
            has_same_max++;
        if (has_same_max >= 2)
        {
            printf("?");
            return 0;
        }
    }
    // 최대 개수의 문자 출력
    printf("%c", (char)('A' + max_idx));
    return 0;
}