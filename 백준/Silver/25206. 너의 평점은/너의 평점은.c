#include <stdio.h>
#include <string.h>

double get_value_of_grade(char *sub_grade)
{
    if (!strcmp(sub_grade, "A+"))
        return (4.5);
    else if (!strcmp(sub_grade, "A0"))
        return (4.0);
    else if (!strcmp(sub_grade, "B+"))
        return (3.5);
    else if (!strcmp(sub_grade, "B0"))
        return (3.0);
    else if (!strcmp(sub_grade, "C+"))
        return (2.5);
    else if (!strcmp(sub_grade, "C0"))
        return (2.0);
    else if (!strcmp(sub_grade, "D+"))
        return (1.5);
    else if (!strcmp(sub_grade, "D0"))
        return (1.0);
    else if (!strcmp(sub_grade, "F"))
        return (0);
    else if (!strcmp(sub_grade, "P"))
        return (-1);
    else if (!strcmp(sub_grade, "F"))
        return (0);
}

int main(void)
{
    double total_value_sub = 0;
    char sub_name[51] = {0};
    double sub_credit = 0, cal_grade = 0, total_credit = 0;
    char sub_grade[3] = {0};

    for (int input_idx=0; input_idx<20; input_idx++)
    {
        scanf("%s %lf %s", sub_name, &sub_credit, sub_grade);\
        cal_grade = get_value_of_grade(sub_grade);
        if (cal_grade < 0)
            continue;
        else
        {
            total_value_sub += sub_credit * cal_grade;
            total_credit += sub_credit;
        }
    }
    printf("%.6lf", total_value_sub / total_credit);
    return 0;
}