#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>


int main()
{
	//int temp;
	//temp = true ? 1024 : 7;	// ternary operator : if / else

	//printf("%d\n", temp);

	//temp = false ? 1024 : 7;
	//
	//printf("%d\n", temp);


	int number;
	scanf("%d", &number);

	bool is_even;	// flag
	
	// const bool is_even = (number % 2 == 0) ? true : false;
	// 간결한 코드 ! 선언과 동시에 초기화
	int a = 1, b = 2;
	int max = (a > b) ? a : b;

	/*if (number % 2 == 0)
		is_even = true;
	else
		is_even = false;
		
	if (is_even)
		printf("Even");
	else
		printf("Odd");
	*/

	is_even = ( number % 2 == 0 ) ? true : false;	// ? : 연산자 우선순위 낮긴 한데. 보기좋게.
	is_even ? printf("Even") : printf("Odd");


	return 0;

}