#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {

	char word[100];
	int alpha[26];
	int index;
	int i;

	scanf("%s", word);
	int len = strlen(word);

	for ( i = 0; i < 26; i++)
	{
		alpha[i] = -1;		//각 알파벳에 -1 저장
	}
	
	for ( i = 0; i < len; i++)
	{
		index = word[i] - 'a';
		if (alpha[index]==-1)
		{
			alpha[index] = i;
		}
	}

	for ( i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}
	return 0;
}