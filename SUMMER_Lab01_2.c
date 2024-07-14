#include <stdio.h>

int main()
{
	char a[20];
	int num[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	int sum = 0;
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
		sum += num[a[i] - 'A'];

	printf("%d\n", sum);
	return 0;
}
