#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int A = 0, B = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

}