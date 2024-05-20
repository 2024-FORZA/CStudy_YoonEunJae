#include <stdio.h>

int main() {
    int M, X, Y;
    int ball_position = 1; 

    scanf("%d", &M);

    for (int i = 0; i < M; i++) { 
        scanf("%d %d", &X, &Y);
        
        if (ball_position == X) {
            ball_position = Y;
        }
        else if (ball_position == Y) {
            ball_position = X;
        }
    }

    printf("%d\n", ball_position);

    return 0;
}
