#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char add[80] = "";
	int N;


	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int sum = 0;
		int plus = 1;
		scanf("%s", add);

		for (int j = 0; j < strlen(add); j++) {
			if (add[j] == 'O') {
				sum += plus; plus++;
			}
			else {
				plus = 1;
			}
		}
		printf("%d\n", sum);

	}


	return 0;

}