#include <stdio.h>

int end(int num) 
{
    int count = 0;
    while (num > 0) {
        if (num % 10 == 6) 
        {
            count++;
        } 
        else 
        {
            count = 0;
        }       
        
        if (count == 3) 
        {
            return 1;  
        }
        
        num /= 10;
    }
    
    return 0; 
}

int main() {
    int N;
    int count = 0;
    int num = 666;

    scanf("%d", &N);
  
    while (1) {
        if (end(num)) {
            count++;  
        }
        if (count == N) {
            printf("%d\n", num);  
            break;
        }
        num++; 
    }

    return 0;
}