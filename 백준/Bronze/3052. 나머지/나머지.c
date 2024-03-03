#include <stdio.h>
#define CASE 42
#define INPUT 10

int main(void)
{
    int inputs[CASE];
    int input_num = 0, count_res = 0;

    for (int reset_idx=0; reset_idx<CASE; reset_idx++)
        inputs[reset_idx] = 0;
    for (int i=0; i<INPUT; i++)
    {
        scanf("%d", &input_num);
        getchar();
        input_num %= CASE;
        inputs[input_num]++;
    }
    for(int print_idx=0; print_idx<CASE; print_idx++)
    {
        if (inputs[print_idx] != 0)
            count_res++;
    }
    printf("%d", count_res);
    return (0);
}