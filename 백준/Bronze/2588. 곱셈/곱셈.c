#include <stdio.h>

int main(void)
{
    int first = 0;
    int second = 0;
    int s_first, s_second, s_third = 0;
    
    scanf("%d", &first);
    getchar();
    scanf("%d", &second);
    getchar();
    s_first = second / 100;
    s_second = (second % 100) / 10;
    s_third = (second % 100) % 10;
    printf("%d\n%d\n%d\n%d", first * s_third, first * s_second, first * s_first, first * second);
    return (0);
}