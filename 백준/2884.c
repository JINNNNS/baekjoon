#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int hour, min;

	scanf("%d", &hour);
	scanf("%d", &min);

	if (min < 45) {
		min += 60;
		hour--;
		
		if (hour < 0) {
			hour = 23;
		}

	}
	printf("%d %d", hour, min-45);

	return 0;
}