#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, X;
	int arr[10000] = { 0 };

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < X) {
			printf("%d  ", arr[i]);

		}
	}

}