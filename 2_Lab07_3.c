#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count;
	int dot = 3;
	int add = 2;

	scanf("%d", &count);

	for (int i = 1; i < count; i++)
	{
		dot += add;
		add *= 2;
	}
	printf("%d", dot * dot);

	return 0;
}