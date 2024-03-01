#include <stdio.h>

int main(void)
{
    int T = 0;
    
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}