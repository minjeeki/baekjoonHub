#include <stdio.h>

int main(void)
{
    int a = -1, b = -1; 
    while (a != 0 && b != 0)
    {
        scanf("%d %d", &a, &b);
        getchar();
        if (a == 0 && b == 0)
            return 0;
        if ((a < b) && (b % a == 0))
            printf("factor\n");
        else if ((a > b) && (a % b == 0))
            printf("multiple\n");
        else
            printf("neither\n");
    }
    return 0;
}