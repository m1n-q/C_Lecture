#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	//int a;
	//printf("%p\n", &a);
	//printf("%d\n", a);		// 초기화 안할시 쓰레기값.

	

	//int *ptr;

	//printf("%p\n", ptr);	// 초기화 안할시 ptr = 쓰레기값
	//printf("%d\n", *ptr);	// 쓰레기값이라는 주소로 re-direction .

	

	//int* ptr = 1234;		// 아무렇게나 초기화

	//printf("%p\n", ptr);	// ptr = 1234
	//printf("%d\n", *ptr);	// 1234라는 주소로 re-direction.
	//						// runtime error : 이 프로그램이 할당받은 메모리가 아님... 
	



	//int* safer_ptr;
	//int a = 123;
	//
	////safer_ptr = &a;		// 포인터 변수는 확실하지 않은 경우가 많음



	//int b;				// 조건에 따라 run-time에 결정되는 경우가 더 많음
	//scanf("%d", &b);

	//if (b % 2 == 0)		// 초기화가 되지 않는 경우가 생길수도!
	//	safer_ptr = &a;
	

	int a = 123;

	int* safer_ptr = NULL;

	int b;
	scanf("%d", &b);

	if (b % 2 == 0)
		safer_ptr = &a;

	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);

	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);


	return 0;



}