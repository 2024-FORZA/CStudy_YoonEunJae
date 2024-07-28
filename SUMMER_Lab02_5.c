#include <stdio.h>
int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}
int main() {
  int a, b, c, d;
  scanf("%d%d", &a, &b);
  scanf("%d%d", &c, &d);
  int g = (b * d) / gcd(b, d);
  int x = a * (g / b) + c * (g / d); 
  
   printf("%d %d\n", x/gcd(x,g), g/gcd(x,g));

  return 0;
}