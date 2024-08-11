#include <stdio.h>

int main()
{
    int n, i, arr[1000]={ }, a, b, c, d;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i=0; i<n; i++)
    {
        a = arr[i]/25;
        b = (arr[i]-a*25)/10;
        c = (arr[i]-a*25-b*10)/5;
        d = (arr[i]-a*25-b*10-c*5)/1;
        printf("%d %d %d %d\n", a,b,c,d);
    }
}