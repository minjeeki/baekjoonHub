#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101] = {0};

    scanf("%s", word);
    printf("%d", strlen(word));
    return 0;
}