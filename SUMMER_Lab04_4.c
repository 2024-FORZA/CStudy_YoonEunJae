#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, x, cnt = 0;
	int arr[100] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (arr[x] == 1) cnt++;
		arr[x] = 1;
	}
	printf("%d", cnt);
	return 0;
}