#include <stdio.h>
#include <string.h>

int main(void)
{
    int dial[8] = {'C', 'F', 'I', 'L', 'O', 'S', 'V', 'Z'};
    char word[16] = {0};
    int min_time = 0;

    scanf("%s", word);
    for (int i=0; i<strlen(word); i++)
    {
        int dial_idx = 0;
        while (word[i] > dial[dial_idx])
            dial_idx++;
        min_time += (dial_idx + 3);
    }
    printf("%d", min_time);
    return 0;
}