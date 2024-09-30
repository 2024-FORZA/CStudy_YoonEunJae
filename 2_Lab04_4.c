#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i = 1, cnt = 0;
	while (n != 0) {
		if (n >= i) {
			n -= i;
			i += 1;
		}
		else {
			n -= 1;
			i = 2;
		}
		cnt += 1;
	}
	printf("%d", cnt);
	return 0;
}