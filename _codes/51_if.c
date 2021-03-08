#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("EVEN");

	else
		printf("ODD");


	return 0;
	
	// 콤마 연산자는 or 도 아니고 and도 아닙니다. 
	// if (A, B) 라고 하신다면 A 도 실행이 되긴 하되 if 조건문은 B 만 고려합니다.
	
}