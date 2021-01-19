#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int N;
	int A = 0, B = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d+%d=%d\n", i,A,B, A + B);
	}
}