#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101] ={0};
    int len_word = 0;
    int is_pel = 1;

    scanf("%s", word);
    len_word = strlen(word);
    for (int i=0; i<(len_word/2); i++)
    {
        if (word[i] != word[len_word-1-i])
        {
            is_pel = 0;
            break;
        }
    }
    printf("%d", is_pel);
    return 0;
}