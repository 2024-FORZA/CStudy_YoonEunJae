#include <stdio.h>

int main()
{
    int i, n, arr[1000000]={ }, max_num, min_num;
    scanf("%d", &n);
    
    
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max_num = arr[0];
    min_num = arr[0];
    for (i=1; i<n; i++)
    {
        if (arr[i]<min_num)
        {
            min_num = arr[i];
        }
        if (arr[i]>max_num)
        {
            max_num = arr[i];
        }
    }
    
    printf("%d %d", min_num, max_num);
}
