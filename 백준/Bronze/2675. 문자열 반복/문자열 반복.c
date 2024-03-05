#include <stdio.h>
#include <string.h>

int main(void)
{
    int test_case = 0, repeat_cnt = 0;
    char str[21] = {0};

    scanf("%d", &test_case);
    getchar();
    for (int i=0; i<test_case; i++)
    {
        scanf("%d", &repeat_cnt);
        getchar();
        scanf("%s", str);
        for (int idx=0; idx<strlen(str); idx++)
        {
            for (int repeat_time=0; repeat_time<repeat_cnt; repeat_time++)
                printf("%c", str[idx]);
        }
        printf("\n");
    }
    return 0;
}