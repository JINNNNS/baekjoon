#include <stdio.h>

long long sum(int *a, int n) {
	long long summ;
	for (int i = 0; i < n; i++) {
		summ = summ + a[i];
	}
	return summ;
}


int main() {
	sum();
	return 0;
}
