#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int paper[100][100] = {0};
    int input_cnt = 0, x = 0, y = 0, res_area = 0;

    scanf("%d", &input_cnt);
    getchar();
    for (int i=0; i<input_cnt; i++)
    {
        scanf("%d %d", &x, &y);
        getchar();
        for (int idx_x=0; idx_x<10; idx_x++)
        {
            for (int idx_y=0; idx_y<10; idx_y++)
            {
                if (paper[x+idx_x][y+idx_y] == 0)
                {
                    res_area++;
                    paper[x+idx_x][y+idx_y] = 1;
                }
            }
        }
    }
    printf("%d", res_area);
    return 0;
}