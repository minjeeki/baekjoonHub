#include <stdio.h>

int print_dot(int section[3])
{
    if (section[0] == section[1])
        return (section[2]);
    else if (section[0] == section[2])
        return (section[1]);
    else if (section[1] == section[2])
        return (section[0]);
}

int main(void)
{
    int width[3], height[3];

    for (int idx=0; idx<3; idx++)
    {
        scanf("%d %d", &width[idx], &height[idx]);
        getchar();
    }
    printf("%d %d", print_dot(width), print_dot(height));
    return 0;
}