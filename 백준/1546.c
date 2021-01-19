#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double arr[1000] = { 0 };

int main() {
	int N;
	double avg = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%lf", &arr[i]);
	}
	double max = 0;
	max = arr[0];
	for (int i = 0; i < N; i++) {
		if (max < arr[i + 1]) {
			max = arr[i + 1];
		}
		
	}
	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / max * 100;
		avg = avg + arr[i];

	}
	printf("%lf", avg/N);
	return 0;
}