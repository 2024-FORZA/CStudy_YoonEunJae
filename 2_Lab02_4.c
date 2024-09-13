#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m, M, t, r;
	int work = 0, h = 0;
	scanf("%d %d %d %d %d", &n, &m, &M, &t, &r);
	int f = m;
	if (f + t > M) {
		printf("-1");
		return 0;
	}
	while (work != n) {
		if (f+t <= M) {
			f += t;
			h += 1;
			work += 1;
		}
		else {
			if (f - r < m) f = m;
			else f -= r;
			h += 1;
		}
	}
	printf("%d", h);
	return 0;
}