#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int max = N / 5;
    int min = -1; 
    for (int i = max; i >= 0; i--) {
        int remaining_weight = N - (i * 5); 
        if (remaining_weight % 3 == 0) {
            int three = remaining_weight / 3; 
            int total_bags = i + three; 
            if (min == -1 || total_bags < min) 
            {
                min = total_bags; 
            }
        }
    }

    printf("%d\n", min);
    return 0;
}