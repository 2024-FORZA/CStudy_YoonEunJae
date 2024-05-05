#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long factorial = 1;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    
    printf("%lld\n", factorial);
    
    return 0;
}