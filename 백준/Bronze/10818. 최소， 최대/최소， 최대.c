#include <stdio.h>
#include <limits.h>

int main(void)
{
    int N, cur = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    
    scanf("%d", &N);
    getchar();
    for (int i=0; i<N; i++)
    {
        scanf("%d", &cur);
        getchar();
        if (max < cur)
            max = cur;
        if (min > cur)
            min = cur;
    }
    printf("%d %d", min, max);
    return (0);
}