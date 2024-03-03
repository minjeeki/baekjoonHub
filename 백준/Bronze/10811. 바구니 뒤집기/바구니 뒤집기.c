#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N_baskets=0, M_inputs=0;
    int range_start=0, range_end=0, tmp_value=0;
    int *baskets;

    scanf("%d %d", &N_baskets, &M_inputs);
    getchar();
    baskets = (int *)malloc((N_baskets+1) * sizeof(int));
    for (int assign_idx=0; assign_idx<=N_baskets; assign_idx++)
        baskets[assign_idx] = assign_idx;
    for (int input_num=1; input_num<=M_inputs; input_num++)
    {
        scanf("%d %d", &range_start, &range_end);
        getchar();
        for (int change_idx=0; change_idx<=((range_end - range_start)/2); change_idx++)
        {
            tmp_value = baskets[range_start+change_idx];
            baskets[range_start+change_idx] = baskets[range_end-change_idx];
            baskets[range_end-change_idx] = tmp_value;
        }
    }
    for (int print_idx=1; print_idx<=N_baskets; print_idx++)
    {
        printf("%d", baskets[print_idx]);
        if (print_idx != N_baskets)
            printf(" ");
    }
    free(baskets);
    return 0;
}