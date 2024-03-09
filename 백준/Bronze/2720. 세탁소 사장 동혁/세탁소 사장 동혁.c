#include <stdio.h>

#define QUATER 25
#define DIME 10
#define NICKEL 5

int main(void)
{
    int test_case = 0;

    scanf("%d", &test_case);
    getchar();
    for (int t=0; t<test_case; t++)
    {
        int change = 0;
        int coin[4];    // 순서대로 쿼터, 다임, 니켈, 페니
        
        scanf("%d", &change);
        getchar();

        coin[0] = change / QUATER;
        coin[1] = (change % QUATER) / DIME;
        coin[2] = (change % QUATER % DIME) / NICKEL;
        coin[3] = (change % QUATER % DIME) % NICKEL;
        for (int print_i = 0; print_i<4; print_i++)
        {
            printf("%d", coin[print_i]);
            if (print_i < 3)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}