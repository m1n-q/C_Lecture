#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

	///* promotion i assignment */
	//// promotion : 작은 값을 큰 자료형에 대입, 문제 x
	//
	//short s = 64;
	//int i = s;

	//float f = 3.14f;
	//double d = f;

	///* demotion in assginments */
	//// demotion : 데이터 사이즈가 큰 자료형을 작은 변수에 대입
	//
	//d = 1.25;
	//f = 1.25;		// 2의 배수로 정밀도 표현
	//f = 1.123;

	///* Ranking */

	//// 실수 > 정수
	//// 메모리순

	//// long double > double > float
	//// unsigned long long, long long
	//// unsigned long, long
	//// unsigned, int
	//// unsigned short, short
	//// unsigned char, char
	//// _Bool

	//d = f + 1.234;	// 서로 다른 자료형 계산 불가. double로 변환 후 연산	
	//f = f + 1.234;	// expression 의 값이 double : WARNING
	//

	///* automatic promotion of function arguments */
	//// 1. Functions w/o prototypes
	//// 2. Variadic functions (ellipsis)

	///* castic operators */
	//d = (double)3.14f;
	//i = 1.6 + 1.7;				// int i, truncation 3.3 = 3
	//printf("i = %d\n", i);
	//i = (int)1.6 + (int)1.7;	// truncation 1.6, 1.7 : 1 + 1 = 2
	//printf("i = %d\n", i);



	// division, casting : truncation
	// float precision format specifier만 round-off




	/* more examples */


	char c;		     // char 도 내부적으로 숫자이다.
	int i;
	float f;
	f = i = c = 'A'; // 65
					 // int 와 float 유효숫자 개수 다름 . WARNING

	printf("%c %d %f\n", c, i, f);

	c += 2;			// 'C', 67
	i = f + 2 * c;	// 2 * c 를 float으로 변환 후 계산
					// 계산된 float 값이 int i 에 대입. WARNING

	printf("%c %d %f\n", c, i, f);


	c = 1106;			// demolition, 
						// 1106 = 0b10001010010
	printf("%c\n", c);	// 0b01010010 = 1106 % 256 = 82 = 'R'


}
