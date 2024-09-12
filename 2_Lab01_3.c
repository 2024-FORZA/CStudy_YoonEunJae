#include <stdio.h>
int main(void)
{
    int A, B, C, total;
    int i, temp;
    int num[10];
    
    for (i=0; i<10; i++)
    {
        num[i]= 0;
    }
    scanf("%d %d %d", &A, &B, &C);
    total = A*B*C;
    for (i=0; total>0; i++)
    {
        temp = total % 10;
        num[temp]++;
        total = total / 10;
    }
    for (i=0; i<10; i++)
    {
        printf("%d\n", num[i]);
    }
    
    return 0;
}