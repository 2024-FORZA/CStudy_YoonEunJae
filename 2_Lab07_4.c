#include <stdio.h>
#include <string.h>

#define word 5
#define length 15

int main() {
    char words[word][length + 1]; 
    int lengths[word]; 

    for (int i = 0; i < word; i++) 
    {
        scanf("%s", words[i]);
        lengths[i] = strlen(words[i]); 
    }

    for (int col = 0; col < length; col++) 
    {
        for (int row = 0; row < word; row++) 
        {
            if (col < lengths[row]) 
            { 
                putchar(words[row][col]);
            }
        }
    }    
    putchar('\n'); 
    return 0;
}