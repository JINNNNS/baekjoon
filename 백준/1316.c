#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	char word[100];
	int count = 0;

	for (int i = 0; i < num; i++) {
		scanf("%s", &word);
		if (word[i] == word[i + 1]) {
			count++;
		}
	}

	printf("%d", count);
}