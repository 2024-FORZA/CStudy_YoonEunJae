#include <stdio.h>
#include <math.h>

int count_escapees(int n) 
{
    return (int)sqrt(n);
}

int main() 
{
    int T; 
    scanf("%d", &T);
    int results[T]; 
    for (int i = 0; i < T; i++) 
    {
        int n;
        scanf("%d", &n);
        results[i] = count_escapees(n);
    }
    for (int i = 0; i < T; i++) 
    {
        printf("%d\n", results[i]);
    }
    return 0;
}