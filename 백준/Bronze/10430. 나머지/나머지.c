#include <stdio.h>

int main(void)
{
    int A, B, C = 0;
    
    scanf("%d %d %d", &A, &B, &C);
    getchar();
    printf("%d\n%d\n%d\n%d\n", (A+B)%C,  ((A%C)+(B%C))%C, (A*B)%C, ((A%C)*(B%C))%C);
    return(0);
}