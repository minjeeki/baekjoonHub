#include <stdio.h>

int main(void)
{
    int students[31];
    int called = 0;
    
    for (int num=1; num<=30; num++)
        students[num] = num;
    for (int i=1; i<=28; i++)
    {
        scanf("%d", &called);
        getchar();
        students[called] = 0;
    }
    for (int j=1; j<=30; j++)
    {
        if (students[j] != 0)
            printf("%d\n", j);
    }
}