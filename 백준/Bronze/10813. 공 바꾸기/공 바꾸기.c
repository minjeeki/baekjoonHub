#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N = 0, M_tries = 0;
    int i_switch = 0, j_switch = 0, tmp_ball =0;
    int *baskets;
    
    scanf("%d %d", &N, &M_tries);
    getchar();
    baskets = (int *)malloc((N+1) * sizeof(int));
    for (int idx1=1; idx1<=N; idx1++)
        baskets[idx1] = idx1;
    for (int i=0; i<M_tries; i++)
    {
        scanf("%d %d", &i_switch, &j_switch);
        getchar();
        tmp_ball = baskets[i_switch];
        baskets[i_switch] = baskets[j_switch];
        baskets[j_switch] = tmp_ball;
    }
    for (int idx2=1; idx2<=N; idx2++)
    {
        printf("%d", baskets[idx2]);
        if (idx2 != N)
            printf(" ");
    }
    free(baskets);
    return(0);
}