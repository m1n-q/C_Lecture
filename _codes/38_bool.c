#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>	//  bool,  true, false



int main()
{
	//int i;
	//i = 5;
	//i == 5;
	//5 = i;	// error
	//5 == i;


	//while (i = 5)  { /* do sth*/ }	// expression 값 = 5 = true, i에 5 대입
	//while (i == 5) { /* do sth*/ }	// expression 값 = 0 or 1

	_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2);


	// 결국 내부적으로는 정수형으로 처리.
	// format specifier가 따로 없음.
	
	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);


	/* 삼항연산자 */

	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");


	/* define : 단순 교체 */
	bool bt = true;
	bool bf = false;




}
