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
	int first, second, third; //ù°�ڸ�,��°�ڸ�,��°�ڸ�
	int count = 99; //���̻��� ������ 99+ �ϱ�..^^

	if (n < 100) { //100���� ������ �׳� �Է¼� ����
		return n;
	}
	else if (n <= 1000) { 
		for (int i = 100; i <= n; i++) { 
			first = i / 100; //��
			second = (i / 10) % 10; //��
			third = i % 10; //��
			if (first - second == second - third) {
				count++;
			}
		}
		return count;

	}



}


