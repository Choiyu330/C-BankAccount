#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num,num_2;

	printf("두 개의 정수입력 : "); scanf("%d %d", &num, &num_2);
	printf("%d가 %d보다 큰가?\n", num, num_2);
	//삼항 연산자
	printf("(1 = 예, 0 = 아니오)\n\n답 : %d \n", num > num_2 ? 1 : 0); 

	
	return 0;
}
