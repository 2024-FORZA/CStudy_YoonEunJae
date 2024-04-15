#include<stdio.h> 

int main()
{
    int N = 0; 
    scanf("%d", &N); 
     
    for (int a = 0; a < N; a++) 
    {
        for (int j = N-2; j >= a ; j--) 
        {

            printf(" ");
        }
        for (int i = 0; i <= a; i++)   
        {
            
             printf("*"); 
        }
        printf("\n"); 
    }

    return 0;
}
