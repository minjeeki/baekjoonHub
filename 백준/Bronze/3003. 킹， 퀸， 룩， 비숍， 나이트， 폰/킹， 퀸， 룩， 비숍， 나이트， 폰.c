#include <stdio.h>

int main(void)
{
    int chess_white[6];
    int original[6] = {1, 1, 2, 2, 2, 8};
    
    for (int idx=0; idx<6; idx++)
    {
        scanf("%d", &chess_white[idx]);
        getchar();
    }
    for (int dif_idx=0; dif_idx<6; dif_idx++)
    {
        printf("%d", original[dif_idx] - chess_white[dif_idx]);
        if (dif_idx != 5)
            printf(" ");
    }
    return 0;
}