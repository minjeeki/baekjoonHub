#include <stdio.h>

int main(void)
{
    int n = 0, k = 0, cnt = 0;

    scanf("%d %d", &n, &k);
    getchar();
    for (int num=1; num <= n; num++)
    {
        if (n % num == 0)
        {
            cnt++;
            if (cnt == k)
                printf("%d", num);
        }
    }
    if (cnt < k)
        printf("0");
    return 0;
}