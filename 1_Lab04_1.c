#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int F(int);

int main(void)
{
    int N;
    
    scanf("%d", &N);
    
    printf("%d\n", F(N));
}

int F(int N) {
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    if (N >= 2)
        return F(N - 1) + F(N - 2);
}