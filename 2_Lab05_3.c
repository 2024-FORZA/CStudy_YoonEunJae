#include <stdio.h>

int main(void) 
{
    int scores[10]; 
    int sum = 0;
    int closest = 0; 

    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        sum += scores[i];

        if (sum <= 100) 
        {
            if (sum > closest) 
            {
                closest = sum;
            }
        } 
        else if (sum > 100)
        {
            if (sum - 100 < 100 - closest) 
            {
                closest = sum; 
            }
            else if (sum - 100 == 100 - closest)
            {
                closest = sum;
            }
            break; 
        }
    }
    printf("%d\n", closest); 
    return 0;
}