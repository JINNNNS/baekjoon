#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add[9] = { 0 };
int main() {
	int max = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &add[i]);
	}
	int num = 0;
	max = add[0];

	for (int i = 0; i < sizeof(add)/4; i++) {
		if (max < add[i + 1]) {
			max = add[i+1];
			num = i+1;
		}
	}
	printf("%d %d", max,num+1);
	
}