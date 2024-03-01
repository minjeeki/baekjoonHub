#include <stdio.h>

int main(void)
{
    int T = 0;
    
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        for (int j=0; j < T-i; j++)
            printf(" ");
        for (int k = 0; k < i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}