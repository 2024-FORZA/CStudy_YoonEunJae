#include <stdio.h>

int main() 
{
    int N, K;
    scanf("%d %d", &N, &K);
    
    int temper[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &temper[i]);
    }

    int max_s = -100 * K;

    for (int i = 0; i <= N - K; i++) 
    {
        int current_s = 0;
        for (int j = 0; j < K; j++) 
        {
            current_s += temper[i + j];
        }
        if (current_s > max_s) 
        {
            max_s = current_s;
        }
    }

    printf("%d\n", max_s);
    return 0;
}