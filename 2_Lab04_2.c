#include <stdio.h>

int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main(void) {
    int N, K; 
    scanf("%d %d", &N, &K);

    int max_value = 0; 

    for (int i = 1; i <= K; i++) {
        int product = N * i; 
        int reversed_product = reverse(product);
        if (reversed_product > max_value) {
            max_value = reversed_product; 
        }
    }

    printf("%d\n", max_value); 
    return 0;
}