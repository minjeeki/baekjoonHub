#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N = 0, M_tries = 0;
    int i_start = 0, j_end = 0, k_ball = 0;
    int *baskets;
    
    scanf("%d %d", &N, &M_tries);
    getchar();
    baskets = (int *)malloc((N+1) * sizeof(int));
    for (int idx1=1; idx1<=N; idx1++)
        baskets[idx1] = 0;
    for (int i=0; i<M_tries; i++)
    {
        scanf("%d %d %d", &i_start, &j_end, &k_ball);
        getchar();
        for (int idx2=i_start; idx2<=j_end; idx2++)
            baskets[idx2] = k_ball;
    }
    for (int idx3=1; idx3<=N; idx3++)
    {
        printf("%d", baskets[idx3]);
        if (idx3 != N)
            printf(" ");
    }
    free(baskets);
    return(0);
}