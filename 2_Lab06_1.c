#include <stdio.h>
#include <string.h>

void find_divisors(int n, int divisors[], int *count) {
    *count = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            divisors[(*count)++] = i;
        }
    }
}

int main() {
    int n;
    char results[100][256]; 
    int result_count = 0;

    while (1) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }

        int divisors[100];  
        int count = 0;
        find_divisors(n, divisors, &count);
        
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += divisors[i];
        }

        if (sum == n) {
            sprintf(results[result_count++], "%d = ", n);
            for (int i = 0; i < count; i++) {
                sprintf(results[result_count - 1] + strlen(results[result_count - 1]), "%d", divisors[i]);
                if (i < count - 1) {
                    strcat(results[result_count - 1], " + ");
                }
            }
        } else {
            sprintf(results[result_count++], "%d is NOT perfect.", n);
        }
    }
    for (int i = 0; i < result_count; i++) {
        printf("%s\n", results[i]);
    }
    return 0;
}