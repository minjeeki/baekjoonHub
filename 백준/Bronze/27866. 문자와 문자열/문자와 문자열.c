#include <stdio.h>

int main(void)
{
    char word[1001] = {0};
    int i = 0;

    scanf("%s", word);
    scanf("%d", &i);
    getchar();

    printf("%c", word[i-1]);
    return 0;
}