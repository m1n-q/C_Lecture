#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	printf("Integer divisions\n");	// 정수 결과 : truncation (반올림 x)
	printf("%d\n", 14 / 7);
	printf("%d\n", 7 / 2);	// 3.5
	printf("%d\n", 7 / 3);	// 2.33
	printf("%d\n", 7 / 4);	// 1.75
	printf("%d\n", 8 / 4);	// 2 


	printf("Truncating toward zero (C99)\n"); // 음수의 경우 0에 가까운 쪽으로
	printf("%d\n", -7 / 2);	// -3.5
	printf("%d\n", -7 / 3);	// -2.33
	printf("%d\n", -7 / 4);	// -1.75
	printf("%d\n", -8 / 4);	// -2

	printf("\nFloating divisions\n");
	printf("%f\n", -9.0 / 4.0);
	printf("%f\n", -9.0 / 4);	// 자료형 다른 것끼리 연산 불가
								// 컴파일러가 double로 바꾸어서 연산



	// division, casting : truncation
	// 값 자체를 담을 수 없으니까

	// float precision format specifier만 round-off
	// 값을 못담아서 잘리는게 아니라 잘라서 표시하는 것이니까!
	
}
