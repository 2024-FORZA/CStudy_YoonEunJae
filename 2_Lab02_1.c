#include <stdio.h>

int main()
{
    int k, n, m, i, j, arr[100]={ },cup,p;
    scanf("%d %d", &n,&m);
    for (k=1; k<n+1; k++)
    {
        arr[k] = k;
    }
    
    for (p=0; p<m; p++)
    {
        scanf("%d %d", &i, &j);
        cup = arr[i];
        arr[i] = arr[j];
        arr[j] = cup;
    }
    for (k=1; k<=n; k++)
    {
        printf("%d ", arr[k]);
    }
}