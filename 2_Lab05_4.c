#include <stdio.h>
#include <string.h>

int main(void) {
    int T; 
    scanf("%d", &T); 

    for (int t = 0; t < T; t++) {
        int position;
        char str[81]; 

        scanf("%d %s", &position, str); 
        position--;

        for (int i = position; i < strlen(str); i++) 
        {
            str[i] = str[i + 1];
        }

        printf("%s\n", str); 
    }

    return 0;
}
