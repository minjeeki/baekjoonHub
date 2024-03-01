#include <stdio.h>

int main(void)
{
    int n = 0;
    int res = 0;
    
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
        res+=i;
    printf("%d", res);
    return 0;
}