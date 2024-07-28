#include <stdio.h>
#include <string.h>
int main(void){

  int b;
  int n;
  char answer[31]={'\0'};
  int result[31]={0};


  scanf("%d %d", &n, &b);


  int i=1;
  result[0]=n%b;
  int mid=n-result[0];
  while(mid){
    result[i]=(mid/b)%b;
    mid = mid/b-result[i];
    ++i;
  }

  for(int j=0; j<i; j++)
    answer[j]=result[j] < 10 ? result[j] + '0' : result[j] + 'A' -10;

  for(int j=strlen(answer)-1;j>=0;j--)
    printf("%c", answer[j]);



  return 0;
}