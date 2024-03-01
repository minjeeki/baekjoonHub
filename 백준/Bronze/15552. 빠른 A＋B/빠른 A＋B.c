#include <stdio.h>

int main(void)
{
    int T = 0;
    
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        int a, b = 0;
        scanf("%d %d", &a, &b);
        getchar();
        printf("%d\n", a + b);
    }   
    return 0;
}