#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char num[101] = {};
    scanf("%s", num);
    
    int len = strlen(num);
    int sum = 0;
    
    for(int i = 0; i<len; i++) {
        sum += (int)num[i] - 48;
    }
    
    printf("%d\n", sum);
    
    return 0;
}