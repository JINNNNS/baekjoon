#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char arr[80] = "";
	int N;
	
	scanf("%d", &N); //ÀÔ·Â °¹¼ö


	for (int i = 0; i < N; i++) {
		int sum = 0;
		int plus = 1;
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += plus;
				plus++;

			}
			else {
				plus = 1;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
	
}