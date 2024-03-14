#include <stdio.h>
#define MAX_N 10000
#define MIN_N -10000

int main(void)
{
    int n = 0;
    int cur_x = 0, cur_y = 0;
    int max_x = MIN_N, max_y = MIN_N, min_x = MAX_N, min_y = MAX_N;
    
    scanf("%d", &n);
    getchar();
    for (int i=0; i<n; i++)
    {
        scanf("%d %d", &cur_x, &cur_y);
        getchar();
        if (cur_x >= max_x)
            max_x = cur_x;
        if (cur_x < min_x)
            min_x = cur_x;
        if (cur_y >= max_y)
            max_y = cur_y;
        if(cur_y < min_y)
            min_y = cur_y;
    }
    printf("%d", (max_x - min_x) * (max_y - min_y));
    return 0;
}