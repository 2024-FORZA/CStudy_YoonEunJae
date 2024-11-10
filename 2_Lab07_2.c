#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 20000
#define MAX_LENGTH 51  

int compare(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return len1 - len2;
    }

    return strcmp(str1, str2);
}

int main() {
    int N;
    scanf("%d", &N);


    char *words[MAX_WORDS];
    int count = 0;


    for (int i = 0; i < N; i++) {
        char word[MAX_LENGTH];
        scanf("%s", word);

        int duplicate = 0;
        for (int j = 0; j < count; j++) {
            if (strcmp(words[j], word) == 0) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            words[count] = (char *)malloc(strlen(word) + 1);
            strcpy(words[count], word);
            count++;
        }
    }

    qsort(words, count, sizeof(char *), compare);

    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
        free(words[i]); 
    }

    return 0;
}