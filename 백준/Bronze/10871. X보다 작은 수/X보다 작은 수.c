#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, X;
    int *A;
    
    scanf("%d %d", &N, &X);
    getchar();
    A = (int *)malloc(N * sizeof(int));
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
        getchar();
    }
    for (int j=0; j<N; j++)
    {
        if (A[j] < X)
        {
            printf("%d", A[j]);
            if (j != N-1)
                printf(" ");
        }
    }
    free(A);
    return (0);
}