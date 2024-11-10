#include <stdio.h>
#include <stdbool.h>
#define MAX_C 2000000

int main(void) 
{
    int N, C;
    scanf("%d %d", &N, &C);   
    bool fireworks[MAX_C + 1] = {false};
    for (int i = 0; i < N; i++) 
    {
        int period;
        scanf("%d", &period);
        for (int time = period; time <= C; time += period) 
        {
            fireworks[time] = true;
        }
    }
    int totaltime = 0;
    for (int i = 1; i <= C; i++) 
    {
        if (fireworks[i]) 
        {
            totaltime++;
        }
    }
    printf("%d\n", totaltime);
    return 0;
}