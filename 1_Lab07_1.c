#include <stdio.h>
int main()
{
    int t, r;
    char word[21];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %s", &r, word);
        for (int j = 0; word[j] != '\0'; j++)
            for (int k = 0; k < r; k++)
                printf("%c", word[j]);
        printf("\n");
    }
}