#include <stdio.h>

int main(void)
{
    int hour, minute = 0;
    int minutes = 0;
    
    scanf("%d %d", &hour, &minute);
    getchar();
    if (hour == 0 && minute < 45)
        hour = 24;
    printf("%d %d", (hour * 60 + minute - 45) / 60, (hour * 60 + minute - 45) % 60);
    return (0);
}