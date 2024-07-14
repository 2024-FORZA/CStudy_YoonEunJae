#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
    long long int i, j, sum = 0;
    char A[10001], B[10001];

    scanf("%s %s", A, B);

    for (i = 0; i < strlen(A); i++)
    {
        for (j = 0; j < strlen(B); j++)
        {
            sum += ((A[i] - '0') * (B[j] - '0'));
        }
    }

    printf("%lld", sum);

    return 0;
}