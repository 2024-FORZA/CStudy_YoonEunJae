#include<stdio.h>

int main(void)
{
	int num, surface = 0;
	int x, y;
	int white[100][100] = { 0 };

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &x, &y);
		for (int start_x = x; start_x < 10 + x; start_x++)
		{
			for (int start_y = y; start_y < 10 + y; start_y++)
			{
				if (white[start_x][start_y] == 0)
                {
                    white[start_x][start_y] = 1;
                    surface++;
                }
			}
		}
	}
	
	printf("%d", surface);

	return 0;
}