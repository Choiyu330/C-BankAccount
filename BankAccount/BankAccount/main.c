#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num,num_2;

	printf("�� ���� �����Է� : "); scanf("%d %d", &num, &num_2);
	printf("%d�� %d���� ū��?\n", num, num_2);
	//���� ������
	printf("(1 = ��, 0 = �ƴϿ�)\n\n�� : %d \n", num > num_2 ? 1 : 0); 

	
	return 0;
}
