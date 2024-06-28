#include<stdio.h>
#include<string.h>
int main() {
	int number = 0;
	char ox[80] = { 'X', };
	int score = 1;
	int total = 0;
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%s", &ox);
		for (int i = 0; i < strlen(ox); i++) {
			
			if (ox[i] == 'O') {
				total += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		printf("%d\n", total);
		score = 1;
		total = 0;

	}
	
	return 0;
}