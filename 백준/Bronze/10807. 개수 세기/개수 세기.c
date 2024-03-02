#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, v,res = 0;
    int *num_arr;
    
    scanf("%d", &N);
    getchar();
    num_arr = (int *)malloc(N * sizeof(int));
    for (int i=0; i<N; i++)
    {
        scanf("%d", &num_arr[i]);
        getchar();
    }
    scanf("%d", &v);
    getchar();
    for (int j=0; j<N; j++)
    {
        if (num_arr[j] == v)
            res++;
    }
    printf("%d", res);
    return 0;
}