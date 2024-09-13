#include <stdio.h>

int main() 
{
    int A, B, C;  
    int total_m, extra_h, final_m, final_h;

    scanf("%d %d", &A, &B);  
    scanf("%d", &C);         


    total_m = B + C;
    extra_h = total_m / 60;
    final_m = total_m % 60;  

    final_h = (A + extra_h) % 24;

    printf("%d %d\n", final_h, final_m);

    return 0;
}