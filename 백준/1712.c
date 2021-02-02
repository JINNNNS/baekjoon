#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int son = 0;
	int nam = 0;
	scanf("%d %d %d", &a,&b,&c);
     


	if(b<c) {
	son = a / (c - b); //ex) 인권비 1000원, 제품재료비 70원, 제품 가격 170원이라 할때 방정식은 1000+70x < 170x, 1000<100x
	printf("%d", son+1);




	}

	else{ //손익분기점이 존재하지 않을 경우
		printf("-1");
	}

	

	return 0;

}