#include <stdio.h>

int main(void)
{
    int T = 0;
    
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        int a, b = 0;
        scanf("%d %d", &a, &b);
        getchar();
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }   
    return 0;
}