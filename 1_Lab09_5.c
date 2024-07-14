#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char input[26];

int main()
{
	int num, alphabet[26], result[26] = { 0, }, check = 0;

	for (int i = 0; i < 26; i++) {
		alphabet[i] = 97 + i;
	}

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", input);

		for (int j = 0; j < 26; j++) {
			if (input[0] == alphabet[j]) {
				result[j] += 1;
				break;
			}
		}
	// input[0]의 첫 글자의 알파벳을 alphabet[]과 비교해 result[j]의 값을 1 늘리는 for문
	}

	for (int i = 0; i < 26; i++) {
		if (result[i] >= 5) {
			printf("%c", alphabet[i]);
			check++;
		}
	// result 배열에 5 이상의 값이 있다면, 해당 위치와 같은 위치의 알파벳을 출력한다.
	}

	if (check == 0) {
		printf("PREDAJA");
	// 출력된 값이 하나도 없다면, PREDAJA를 출력한다.
	}

	return 0;
}