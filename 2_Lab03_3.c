#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    int small = 0;

    for (int i = 1; i < N; i++) {
        int sum = i;
        int num = i;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == N) {
            small = i;
            break; 
        }
    }

    printf("%d\n", small);
    return 0;
}