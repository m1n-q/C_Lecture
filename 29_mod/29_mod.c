#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int seconds = 0, minutes = 0, hours = 0;

	//while (seconds >= 0)
	//{
	//	printf("Input seconds : ");
	//	scanf("%d", &seconds);

	//	if (seconds >= 0) {

	//	

	//	hours = seconds / 3600;

	//	minutes = seconds / 60 - hours * 60;
	//	//minutes = seconds / 60 
	//	//minutes %= 60;


	//	seconds = seconds % 60;

	//	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
	//	}
	//
	//}
	//printf("GOOD BYE\n");

	int div, mod;


	// div : ���� ����� �����ϰ� ��ȣó��
	// mod : �������� �� ���� ������
	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);
	

	div = 11 / -5;		
	mod = 11 % -5;		// first operand ����
	printf("div = %d, mod = %d\n", div, mod);


	div = -11 / 5;
	mod = -11 % 5;		// first operand ����
	printf("div = %d, mod = %d\n", div, mod);


	div = -11 / -5;
	mod = -11 % -5;		// first operand ����
	printf("div = %d, mod = %d\n", div, mod);
}
