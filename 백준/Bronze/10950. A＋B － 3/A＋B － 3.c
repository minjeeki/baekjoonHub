#include <stdio.h>

int main(void)
{
    int N;
    
    scanf("%d", &N);
    getchar();
    for (int i=0; i<N; i++)
    {
        int a, b = 0;
        scanf("%d %d", &a, &b);
        getchar();
        printf("%d\n", a + b);
    }
    return 0;
}