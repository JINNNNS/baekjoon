#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num[1000000] = { 0 };

int main() {
	int N; //�Է� ���� �ޱ�
	scanf("%d", &N);
	int max = 0; int min = 0; //�ִ�, �ּڰ�

	
	for (int i = 0; i < N; i++) { //ó���� �Է¹��� ������
		scanf("%d", &num[i]);
	}

	max = num[0]; min = num[0]; // �ִ밪�� �ּڰ��� ������ �� �ֱ�

	for (int i= 0; i < N; i++) { //�ִ񰪰� �ּڰ� ����
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