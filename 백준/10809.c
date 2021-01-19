#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[100];
	int num[26] = { 0, };

	scanf("%s", &arr);

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[j] == i) {
				num[i - 97] = j + 1;
				break;
			}

		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", num[i]-1);
	}
	return 0;


}