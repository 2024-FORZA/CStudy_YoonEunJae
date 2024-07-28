#include <stdio.h>

int main()
{
    int num[9];
    int real[7];
    int i, j, sum = 0;
    int change;
    for (i=0; i<9; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    
    int over = sum - 100;
    int a,b = 0;
    for (i=0; i<9; i++)
    {
        for (j=i+1; j<9; j++)
        {
            if ((num[i]+num[j]) == over)
            {
                a = i;
                b = j;
                break;
            }
        }
    }
    
    
    j = 0;
    for (i=0; i<9; i++)
    {
        if (i != a && i != b)
        {
            real[j] = num[i];
            j++;
        }
    }
    
    for (i=0; i<7; i++)
    {
        for (j=i+1; j<7; j++)
        {
            if (real[i]>real[j])
            {
                change = real[i];
                real[i] = real[j];
                real[j] = change;
            }
        }
    }
    
    for (i=0; i<7; i++)
    {
        printf("%d\n", real[i]);
    }
    
    return 0;
}