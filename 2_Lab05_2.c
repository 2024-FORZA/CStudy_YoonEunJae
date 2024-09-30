#include <stdio.h>

int main(void) 
{
    int A, B;
    scanf("%d %d", &A, &B); 
    int sequence[1000]; 
    int index = 0;      

    for (int i = 1; index < 1000; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (index < 1000) 
            {
                sequence[index] = i; 
                index++;
            }
        }
    }

    int sum = 0;
    for (int i = A - 1; i < B; i++) 
    { 
        sum += sequence[i];
    }

    printf("%d\n", sum); 
    return 0;
}