#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum =sum+i;

	}
	printf("%d", sum);


	for (int i = N; i >= 1; i--) {
		printf("%d\n", i);
	}

}