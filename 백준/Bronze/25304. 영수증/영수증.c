#include <stdio.h>

int main(void)
{
    int X, N, a, b, res = 0;
    
    scanf("%d", &X);
    getchar();
    scanf("%d", &N);
    getchar();
    for (int i=0; i<N; i++)
    {
        scanf("%d %d", &a, &b);
        getchar();
        res += (a * b);
    }
    if (res == X)
        printf("Yes");
    else
        printf("No");
    return 0;
}