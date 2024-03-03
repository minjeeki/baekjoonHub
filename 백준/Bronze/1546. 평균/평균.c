#include <stdio.h>

int main(void)
{
    int subject_num = 0, cur_score = 0, high_score = 0, total_score = 0;
    double res_avg = 0;
    
    scanf("%d", &subject_num);
    getchar();
    for (int input_idx=0; input_idx<subject_num; input_idx++)
    {
        scanf("%d", &cur_score);
        getchar();
        if (high_score < cur_score)
            high_score = cur_score;
        total_score += cur_score;
    }
    res_avg = (double)total_score * 100 / (high_score * subject_num);
    printf("%.2lf", res_avg);
    return 0;
}