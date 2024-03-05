#include <stdio.h>
#include <string.h>
// 개행 문자 역시 포함되어 들어오기에 +2를 해줘야 함
#define MAX_SENTENCE 1000002

int main(void)
{
    char sentence[MAX_SENTENCE];
    int word_cnt = 0, was_char = 0, len_str = 0, idx = 0;

    // 공백이 있는 문자열은 scanf로는 받을 수 없고, fgets()를 통해 받아야 한다.
    fgets(sentence, MAX_SENTENCE, stdin);
    //fgets()로 문장을 받으면 개행 문자 역시 문자열에 포함되기에 개행문자를 널문자로 바꿔줘야 이후 계산에서 추가되지 않는다.
    len_str = strlen(sentence);
    sentence[len_str - 1] = 0;
    while (sentence[idx] != 0)
    {
        if (was_char == 0 && sentence[idx] != ' ')
        {
            word_cnt++;
            was_char = 1;
        }
        else if (was_char == 1 && sentence[idx] == ' ')
            was_char = 0;
        idx++;
    }
    printf("%d", word_cnt);
    return 0;
}