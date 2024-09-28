#include <stdio.h>

int main() {
    int N, previous, current;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        scanf("%d", &previous);
        printf("%d", previous);

        for (int i = 1; i < N; i++) {
            scanf("%d", &current);
            if (current != previous) {
                printf(" %d", current);
                previous = current; 
            }
        }
        printf(" $\n");
    }

    return 0;
}
