#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// 대입문도 값을 계산하는 표현식이다!
	// 대입은 side effect
	int c, d;
	c = 0;
	d = 3 + (c = 1 + 2);	// 3 + 3
	printf("c = %d, d = %d\n", c, d);

	// 비교식도 표현식
	c = 2 > 1;	// 1
	d = 1 > 2;	// 0
	printf("%d", c + d);


	/* Statements */

	int x, y, apples;	// declaration statement
	apples = 3;			// assginment statement
	;					// null statement
	
	7;
	1 + 2;
	x = 4;
	++x;				// expression + ; : statement
	
	x = 1 + (y = 5);	// y = 5 : subexpression	
						// expression 의 일부
	
	
	while (x++ < 10)	// while statement (structured statements)
		y = x + y;
	
	printf("%d\n", y);	// function statement
	
	
	//return 0;			// return statement


	/* Side Effects & Sequence Points */

	// Sequence Points : 값을 언제 계산하는가? 
	//					 ';' 를 만났을때, 아 이제 expression 계산을 해도 되는구나!



	x = 4;	// main intent : evaluating expression
			// side effect : assignment


	while (x++ < 10)		// (x++ < 10) 자체가  full expression	
							// ';' 가 아닌 ')' 를 만났을때 ++ 계산 (특별한 경우임.)
		printf("%d\n", x);




	x = 0;

	y = (4 + x++) + (6 + x++);	// 두 괄호 모두 subexpression (full x)
								// 언제 계산될지 모호하다.
								// 컴파일러마다 다를 수 있음 ( ';' / ')' )
								// 한 문장에서 여러번 사용은 좋지 않다!

	printf("x= %d, y = %d",x, y);




}
