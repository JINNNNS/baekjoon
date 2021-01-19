#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hansoo(int);
int main() {
		int n, count;
		scanf("%d", &n);
		count=Hansoo(n);
		printf("%d", count);
		return 0;
	}
int Hansoo(int n) {
	int first, second, third; //첫째자리,둘째자리,셋째자리
	int count = 99; //백이상은 무조건 99+ 니깡..^^

	if (n < 100) { //100보다 작으면 그냥 입력수 리턴
		return n;
	}
	else if (n <= 1000) { 
		for (int i = 100; i <= n; i++) { 
			first = i / 100; //백
			second = (i / 10) % 10; //십
			third = i % 10; //일
			if (first - second == second - third) {
				count++;
			}
		}
		return count;

	}



}


