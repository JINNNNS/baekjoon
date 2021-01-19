#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[10] = { 0 };
	int nam[10] = { 0 };
	int plus = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		
		nam[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		int dala = 0;
		dala = nam[0];
		if (dala != nam[i + 1]) {
			dala = nam[i + 1];
			plus++;
		}
		
	}
	printf("%d", plus);

}