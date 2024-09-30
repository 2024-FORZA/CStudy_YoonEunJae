#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n, max = 0, total = 0;
	scanf("%d", &n);
	int *stick = (int*)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) scanf("%d", &stick[i]);
	for (int i = n-1; i >= 0; i--) {
		if (max < stick[i]) {
			max = stick[i];
			total += 1;
		}
	}
	printf("%d", total);
	return 0;
}
