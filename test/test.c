#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> //	malloc()
#include <cstddef>

	//struct MyStruct
	//{
	//	int i;
	//	float f;
	//};

	int main()
	{
		/* 1. size of basic types */
		int a = 0;
		unsigned int int_size1 = sizeof(a);		// 함수처럼 사용 가능
		unsigned int int_size2 = sizeof(int);	// 자료형 직접 가능
		unsigned int int_size3 = sizeof a;		// 연산자처럼 사용 가능

		// portable type
		// size_t : 해당 시스템에서 어떤 객체, 값을 포함할 수 있는 최대 크기를 표현한다.
		//			시스템에 따라 가변적인 자료형

		size_t int_size4 = sizeof(a);	// typedef : 32bits or 64bits
		size_t float_size = sizeof(float);

		printf("Size of int type = %u bytes.\n", int_size1);
		printf("Size of int type = %zu bytes.\n", int_size4);		// %zu : size_t
		printf("Size of float type = %zu bytes.\n", float_size);	// %zu : size_t




		/* 2. size of arrays */

		int int_arr[30];	// int_arr[0] = 1024; ...
		int* int_ptr = NULL;	// 주소를 적을 수 있는 종이
		int_ptr = (int*)malloc(sizeof(int) * 30);	// 4bytes * 30 만큼 메모리를 할당받고, 그 대표 주소값을 종이에 적음
		// int_ptr[0] = 1024; ...

		printf("Size of array = %zu bytes\n", sizeof(int_arr));	// 4bytes * 30	
																// 배열 변수명은 배열 메모리 공간을 대표하는 
																// 맨 앞의 주소값이라고 했는데?
																// 그 사이즈가 나와야 하는 것 아닌가요?


		printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));	// 주소를 적는 종이의 사이즈

		// 둘 다 120byte 를 대표하는 주소값인데 왜?

		// int_arr : 120byte 메모리 공간이지만, 사용할 때만 대표주소로 잠깐 바뀌는 것
		//			 선언되는 순간 120byte로 지정
		//			 compile할 때 120byte

		// int_ptr : 4byte로 선언된 뒤, 나중애 runtime 에 메모리 공간 결정
		//			 compiler가 임의의 사이즈가 들어갈 수 있다고 생각, compiler가 사이즈를 알 수 없음




		/* 3. size of character array */

		char c = 'a'; // 문자의 리터럴 ''
		char string[10]; // max 9 character + '/0' (null character) : 마침표 역할

		size_t char_size = sizeof(char);
		size_t str_size = sizeof(string);

		printf("Size of char type = %zu bytes\n", char_size);
		printf("Size of string type = %zu bytes\n", str_size);	//1byte * 10



		/* 4. size of structure */


		//printf("%zu\n", sizeof(struct MyStruct));	// int 4 + float 4 = 8







	}

