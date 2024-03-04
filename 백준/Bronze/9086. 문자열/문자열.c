#include <stdio.h>
#include <string.h>

int main(void)
{
    int test_case = 0;
    char input_word[1001] = {0};

    scanf("%d", &test_case);
    getchar();
    for (int i=0; i<test_case;i++)
    {
        scanf("%s", input_word);
        printf("%c", input_word[0]);
        printf("%c\n", input_word[strlen(input_word)-1]);
    }
    return 0;
}