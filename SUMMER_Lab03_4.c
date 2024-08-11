#include <stdio.h>

int main()
{
    int a, b, aline,bline,count,b_length,a_length,garo,sero;
    
    scanf("%d %d", &a, &b);
    
    if (a % 4 ==1)
    {
        aline =1;
    }
    else if (a % 4 ==2)
    {
        aline =2;
    }
    else if (a % 4 ==3)
    {
        aline =3;
    }
    else
    {
        aline = 4;
    }
     if (b % 4 ==1)
    {
        bline =1;
    }
    else if (b % 4 ==2)
    {
        bline =2;
    }
    else if (b % 4 ==3)
    {
        bline =3;
    }
    else
    {
        bline = 4;
    }
    
    b_length = 1;
    a_length = 1;
    while (1)
    {
        if (bline + 4 * b_length > b)
        {
            b_length ++;
            break;
        }
        if (bline + 4 * b_length ==b)
        {
            b_length ++;
            break;
        }
        b_length ++;
    }
    while (1)
    {
        if (aline + 4 * a_length > a)
        {
            a_length ++;
            break;
        }
        if (aline + 4 * a_length ==a)
        {
            a_length ++;
            break;
        }
        a_length ++;
    }
    
    if (a<=4)
    {
        a_length = 1;
    }
    if(b<=4)
    {
        b_length = 1;
    }
    if (a_length >= b_length)
    {
        garo = a_length - b_length;
    }
    if (b_length >= a_length)
    {
        garo = b_length - a_length;
    }
    if (aline>=bline)
    {
        sero = aline - bline;
    }
    if (bline>=aline)
    {
        sero = bline - aline;
    }
    printf("%d", garo + sero);
}