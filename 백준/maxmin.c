#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num[1000000] = { 0 };

int main() {
	int N; //입력 갯수 받기
	scanf("%d", &N);
	int max = 0; int min = 0; //최댓값, 최솟값

	
	for (int i = 0; i < N; i++) { //처음에 입력받은 값까지
		scanf("%d", &num[i]);
	}

	max = num[0]; min = num[0]; // 최대값과 최솟값에 임의의 값 넣기

	for (int i= 0; i < N; i++) { //최댓값과 최솟값 결정
		if (max < num[i + 1]) {
			max = num[i + 1];
		}
		if (min > num[i + 1]) {
			min = num[i + 1];
		}
	}

	printf("%d %d", min, max);
	return 0;
	



}