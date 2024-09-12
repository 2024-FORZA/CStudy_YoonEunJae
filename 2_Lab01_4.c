#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n , sec, young = 0, min = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sec);
        young += (sec / 30 + 1) * 10;
        min += (sec / 60 + 1) * 15;
    }

    if (min < young) printf("M %d", min);
    else if (young < min) printf("Y %d", young);
    else printf("Y M %d", min);
    return 0;
}