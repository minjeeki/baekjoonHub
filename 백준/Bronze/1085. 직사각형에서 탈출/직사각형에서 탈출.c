#include <stdio.h>

int main(void)
{
    int x = 0, y = 0, w = 0, h = 0;
    int rev_x = 0, rev_y = 0;
    int min_x = 0, min_y = 0;
    int res = 1;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    getchar();
    rev_x = w - x;
    rev_y = h - y;
    min_x = (rev_x >= x) ? x : rev_x;
    min_y = (rev_y >= y) ? y : rev_y;
    res = (min_y >= min_x) ? min_x : min_y;
    printf("%d", res);
    return 0;
}