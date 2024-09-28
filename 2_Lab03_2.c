#include <stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d", &n);
    
    if(n%10==0)
    {
        a = n/300;
        b = (n-a*300)/60;
        c = (n-a*300-b*60)/10;
        printf("%d %d %d", a,b,c);
    }
    else
    {
        printf("-1");
    }

    return 0;
}