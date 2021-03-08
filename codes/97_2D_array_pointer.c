#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	/*  1차원 배열 2개 선언, 포인터의 배열로  */

	//int arr0[3] = { 1, 2, 3 };
	//int arr1[3] = { 4, 5, 6 };

	//int* parr[2] = { arr0, arr1 };	// array of pointer
	//// arr0 : 1을 가리키는 포인터 (1의 주소를 담은 arr0)
	//// parr




	//for (int i = 0; i < 2; ++i)
	//{
	//	for (int j = 0; j < 3; ++j)
	//		printf("%d(==%d, %d)  ",
	//			  parr[i][j],			// 1. 2차원 배열처럼

	//			*(parr[i] + j),			// 2. 배열의 원소에 포인터 연산

	//			*(*(parr + i) + j));	// 3. 배열명을 포인터처럼, 이중포인터 연산
	//	
	//	printf("\n");
	//}



	/*  2차원 배열 선언, 2개의 포인터로  */

	//int arr[2][3] = { { 1, 2, 3 }, 
	//				  { 4, 5, 6 } };

	//int* parr0 = arr[0];
	//int* parr1 = arr[1];

	


	/*  2차원 배열 선언, 포인터의 배열로  */

	int arr[2][3] = { { 1, 2, 3 },
					  { 4, 5, 6 } };

	//parr[0] = arr[0];		// parr[0] : 포인터 자리
	//parr[1] = arr[1];
	int* parr[2] = { arr[0], arr[1] }; // array of pointer

									   
	//--->>> arr[0] : 진짜 배열명
	//-->>> parr[0] : arr[0]의 주소를 가리키는 포인터.





	//printf("%p\n", parr);
	//printf("%p\n", &parr);

	//printf("%p\n", &parr[0]);		// ADDRESS OF POINTER 
	//printf("%p\n", parr[0]);		
	//
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr);
	//
	//printf("%p\n", arr[0]);
	//printf("%p\n", &arr[0][0]);
	









	///* Array of string(arrayofchar) */

	//// string = "ARRAY" of char
	//// 배열 이름 = 첫 원소 주소
	//
	//
	//
	//char* name[] = { "Aladdin","Jasmine","Magic Carpet","Genie" }; // pointer의 배열 ( A 의 위치, J의 위치 ...)
	////ㄴ array of pointer


	//const int n = sizeof(name) / sizeof(char*);
	//
	//for (int i = 0; i < n; ++i)
	//	printf("%s at %u\n", name[i], (unsigned)name[i]);	// name[i] = &name[i][0]
	//printf("\n");




	//char aname[][15] = { "Aladdin","Jasmine","Magic Carpet","Genie","Jafar" };
	//
	//const int an = sizeof(aname) / sizeof(char[15]);

	//for (int i = 0; i < 5; ++i)
	//	printf("%s at %u\n", aname[i], (unsigned)aname[i]);	// aname[i] = &aname[i][0]
	//printf("\n");





	//return 0;

}