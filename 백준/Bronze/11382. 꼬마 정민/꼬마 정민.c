#include <stdio.h>

int main(void)
{
    long long A, B, C = 0;
    
    scanf("%lld %lld %lld", &A, &B, &C);
    getchar();
    printf("%lld", A + B + C);
    return (0);
}