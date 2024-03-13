#include <stdio.h>

int main(void)
{
    int A = 0, B = 0, V = 0;
    int day = 0;
    scanf("%d %d %d", &A , &B, &V);
    getchar();
    day = (V - A) / (A - B);
    V -= ((A-B) * day);
    while (1)
    {
        day++;
        V -= A;
        if (V <= 0)
        {
            printf("%d", day);
            return 0;
        }
        V += B;
    }
    return 0;
}


/* 시간 초과
int main(void)
{
    int A = 0, B = 0, V = 0;
    int day = 0, day_climb = 0;
    scanf("%d %d %d", &A , &B, &V);
    getchar();
    while (1)
    {
        day++;
        day_climb += A;
        if (day_climb >= V)
        {
            printf("%d", day);
            return 0;
        }
        day_climb -= B;
    }
    return 0;
}
*/