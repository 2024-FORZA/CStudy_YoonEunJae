#include <stdio.h>

int main()
{
    int n, i, arr[1000]={ },max_num=arr[0];
    float sum =0 , score[1000]={ }, avg;
    
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if (max_num<arr[i])
            max_num = arr[i];
    }
    
    for (i=0; i<n; i++)
    {
        score[i] = (float) arr[i] / max_num * 100;
        sum = sum + score[i];
    }
    avg = sum/n;
    printf("%f",avg);
    
}