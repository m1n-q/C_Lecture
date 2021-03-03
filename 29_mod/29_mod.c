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


	// div : 수학 연산과 동일하게 부호처리
	// mod : 나눠지는 수 기준 나머지
	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);
	

	div = 11 / -5;		
	mod = 11 % -5;		// first operand 기준
	printf("div = %d, mod = %d\n", div, mod);


	div = -11 / 5;
	mod = -11 % 5;		// first operand 기준
	printf("div = %d, mod = %d\n", div, mod);


	div = -11 / -5;
	mod = -11 % -5;		// first operand 기준
	printf("div = %d, mod = %d\n", div, mod);
}
