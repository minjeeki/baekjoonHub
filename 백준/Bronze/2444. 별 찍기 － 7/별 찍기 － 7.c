#include <stdio.h>

int main(void)
{
    int N;
    
    scanf("%d", &N);
    getchar();
    
    for(int line=0; line<N; line++)
    {
        for (int space=N-1-line; space>0; space--)
            printf(" ");
        for (int star=0; star<1+line*2; star++)
            printf("*");
        printf("\n");
    }
    for (int b_line=0; b_line<N-1; b_line++)
    {
        for (int b_space=0; b_space<b_line+1; b_space++)
            printf(" ");
        for (int b_star=2*(N-2-b_line)+1; b_star>0; b_star--)
            printf("*");
        printf("\n");
    }
    return 0;
}