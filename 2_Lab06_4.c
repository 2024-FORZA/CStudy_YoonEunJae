#include <stdio.h>
#include <string.h>

int is_self_replicating_number(int n) {
    int square = n * n; 
    char str_square[20], str_n[20];
    
    sprintf(str_square, "%d", square);
    sprintf(str_n, "%d", n);

    int len_square = strlen(str_square);
    int len_n = strlen(str_n);

    if (len_square < len_n) return 0;

    return strcmp(str_square + (len_square - len_n), str_n) == 0;
}

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N); 

        if (is_self_replicating_number(N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}


