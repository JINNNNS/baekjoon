#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int son = 0;
	int nam = 0;
	scanf("%d %d %d", &a,&b,&c);
     


	if(b<c) {
	son = a / (c - b); //ex) �αǺ� 1000��, ��ǰ���� 70��, ��ǰ ���� 170���̶� �Ҷ� �������� 1000+70x < 170x, 1000<100x
	printf("%d", son+1);




	}

	else{ //���ͺб����� �������� ���� ���
		printf("-1");
	}

	

	return 0;

}