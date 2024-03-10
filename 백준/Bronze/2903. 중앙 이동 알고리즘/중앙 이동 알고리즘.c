#include <stdio.h>

int ft_square(int root, int exponent)
{
    int res = 1;

    for(int i=1; i<=exponent; i++)
        res *= root;
    return res;
}

int main(void)
{
    int N = 0, square_in_line = 0, res = 0;

    scanf("%d", &N);
    getchar();
    square_in_line = ft_square(2, N) + 1;
    res = square_in_line * square_in_line;
    printf("%d", res);
    return (0);
}