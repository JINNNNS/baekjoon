#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, sum = 0;
	scanf("%d", &num);
	//char *arr = (char*)malloc(sizeof(char)*num); //동적할당
	char arr[100];

	scanf("%s", &arr);

	for (int i = 0; i < num; i++) {
		sum += arr[i] - 48;
	}
	printf("%d", sum);
}