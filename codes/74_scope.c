#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



//int a;							// file 영역 변수 : file 전체에서 사용!


int int_max(int i, int j); // 선언

int int_max(int i, int j)  // 정의
{
	//a = 456;						// in_function이 유효한 scope : 함수의 block 안
	int in_function;				// 지역 변수!
	in_function = i > j ? i : j;
	return in_function;				
}


int main()
{	
	//in_function = 123;

	int a;							
									
	a = int_max(1, 2);

	//in_function = 123;


	printf("%d\n", a);
	printf("%p\n", &a);

	{	/* new scope */

		int a;						// 이 선언이 있으면 작은 영역만의 a  ( 우선순위 - stack! )
									// 없으면, 큰 영역의 a 사용!

		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);
		
	}

	printf("%d\n", a);
	printf("%p\n", &a);				// 작은 영역의 a에 접근 불가! ( scope가 끝나면 stack에서 사라짐!)


	return 0;

}

