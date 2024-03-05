#include <stdio.h>

int reverse_num(char *input_num);

int main(void)
{
    char first_num[4];
    char second_num[4];
    int first_sangsu = 0, second_sangsu = 0;

    scanf("%s %s", first_num, second_num);
    first_sangsu = reverse_num(first_num);
    second_sangsu = reverse_num(second_num);
    if (first_sangsu > second_sangsu)
        printf("%d", first_sangsu);
    else
        printf("%d", second_sangsu);
    return 0;
}

int reverse_num(char *input_num)
{
    int res = 0;
    for (int idx=2; idx>=0; idx--)
    {
        if (idx == 2)
            res += (input_num[idx] - '0');
        else
        {
            res *= 10;
            res += (input_num[idx] - '0');
        }
    }
    return res;
}