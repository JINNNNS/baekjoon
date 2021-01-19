#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A = 0, B = 0, C = 0;
	int sum = 1;
	int arr[10] = { 0 };

	scanf("%d %d %d", &A,&B,&C);
	sum = A * B*C;

	while (1) {
		if (sum > 10) {
			arr[(sum % 10)]++;
			sum /= 10;
		}
		else {
			arr[sum]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);

	}


}