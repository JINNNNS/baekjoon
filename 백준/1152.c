#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {

	char s[1000000];
	scanf("%s", &s);
	int num = 0;
	fgets(s, sizeof(s), stdin);
	int i = 0;

	if (s[0] == ' ') {//�ܾ� ���ۺ��� �����̸� ����
		num--;
	}

	do {
		if (s[i] == ' '&&s[i + 1] != '\n')
			num++;
		i++;
	} while (s[i] != '\0');


	num++;
	printf("%d", num);





}