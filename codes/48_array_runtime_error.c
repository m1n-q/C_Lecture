#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM_DAYS 365 // 매크로
					 // 컴파일하기 전에 복붙
					 // Array size를 define 하는 경우도 많음 !


int main()
{	

	/* 
		같은 데이터형 여러번 사용 
		연결되어 있는 메모리를 덩어리로!
	*/

	//char my_chars[] = "Hello, World";

	//int daily_temperature[NUM_DAYS];
	//double stock_prices_history[NUM_DAYS];

	//printf("%zd\n", sizeof(stock_prices_history));
	//printf("%zd\n", sizeof(double) * NUM_DAYS);
	//printf("%zd\n", sizeof(stock_prices_history[0]));

	
	
	int my_numbers[5];

	//					// index 
	//my_numbers[0] = 1;	// offsets : 첫 메모리 주소로부터 얼마나 떨어져 있나?
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2;
	//my_numbers[4] = 1024;

	//// scanf("%d", &my_numbers[0]); // [] 가 & 보다 우선순위 높다. 
	//							 // &(my_numbers[0]) 과 같음.
	//							 // & : 주소를 넘겨라.

	//// scanf("%d", my_numbers);	 // [0] 과 같다.
	//							 // 배열명은 자체적으로 주소.
	//							 // 연속적으로 할당된 메모리 공간의 첫번째 주소를 나타냄



	//printf("%d\n", my_numbers[0]);
	//printf("%d\n", my_numbers[1]);
	//printf("%d\n", my_numbers[2]);
	//printf("%d\n", my_numbers[3]);
	//printf("%d\n", my_numbers[4]);




	/* Runtime Error */

	//my_numbers[5] = 123;	// out of bound (6번째 공간. 할당 x)
							// compile error 없음	( compile time : 문법오류 잡아냄 )
							// 실행시 runtime error ( run time : 문법오류 없음. 실행시 발견 )


	//my_numbers = 7;			// compile error
							// 배열명 : 첫 주소의 역할.
							// 주소에 바로 대입 ? ㅋㅋ

	//printf("%d\n", my_numbers[5])	// out of bound



	return 0;

}