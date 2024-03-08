#include <stdio.h>
#include <string.h>

int main(void)
{
    char N[30] = {0};
    int B = 0, len_n = 0;
    int result = 0, cur_value = 0;

    scanf("%s %d", N, &B);
    getchar();
    len_n = strlen(N);
    for (int idx=0; idx<len_n; idx++)
    {
        if (N[idx] >= 'A' && N[idx] <= 'Z')
            cur_value = N[idx] - 'A' + 10;
        else
            cur_value = N[idx] - '0';
        for (int repeat=len_n-1-idx; repeat>0; repeat--)
            cur_value *= B;
        result += cur_value;
    }
    printf("%d", result);
    return (0);
}