#include <stdio.h>

int main(void)
{
    int hour, minute, cook_time = 0;
    
    scanf("%d %d", &hour, &minute);
    getchar();
    scanf("%d", &cook_time);
    getchar();
    printf("%d %d", ((hour * 60 + minute + cook_time) / 60) % 24, (hour * 60 + minute + cook_time) % 60);
    return (0);
}