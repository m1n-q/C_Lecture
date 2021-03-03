#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MONTHS 12	// symbolic constant, macro

int main()
{	
	/* Basic usage */

	int high[MONTHS] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	

	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%d ", high[i]);
	//printf("\n");

	//float avg = 0.0f;
	//for (int i = 0; i < MONTHS; ++i)
	//	avg += high[i];
	//printf("Average = %f\n", avg / (float)MONTHS);




	/* 하나의 변수처럼 */
	//high[0] = 1;
	//high[1] = 2;

	
	/* 선언 시에만 중괄호로 초기화 가능합니다 */
	//high = { 1,2,3,4,5,6,7,8,9,10,11,12 };	  // NOT working
	//high[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };  // NOT working



	

	/* Addresses */

	//printf("%p %p\n", high, &high[0]);			// 배열의 이름 == 첫번째 주소 포인터
	//
	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%lld\n", (long long)&high[i]);	// sizeof(int) 인 4씩 커지는 주소
	//printf("\n");

	

	/*  Compiler doesn't check wheter indices are valid  */
	
	//high[12] = 4;		// Runtime Error : compile은 된다!
	//high[-1] = 123;		// 할당받지 않은 메모리에 접근, 운영체제가 혼냄
	


	/*  const and array  */
	
	/*const int tmp = 0;
	tmp = 4;*/

	/*const int low[12] = { -7,-5,1,7,13,18,22,22,16,9,2,-5 };
	low[0] = 123;*/


	/* When array is not initialized */

	///*static*/ int not_init[4];		//TODO: try static (storage class)
	//								//static(정적) 변수는 0으로 자동 초기화?
	//for (int i = 0; i < 4; ++i)
	//	printf("%d\n", not_init[i]);


	/* Partially initialized */

	//int insuff[4] = { 2,4 };
	//for (int i = 0; i < 4; ++i)
	//	printf("%d\n", insuff[i]);


	/* Overlly initialized */
	//int over[2] = { 2,4,8,16 };	// compile error

	
	/* Omitting size */
	//const int pot[] = { 1,2,4,8,16,32,64 };
	//printf("%d\n", sizeof(pot));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(pot[0]));

	//for (int i = 0; i < (sizeof pot / sizeof pot[0]); ++i) // 사이즈 모르니까 전체 / 원소
	//	printf("%d ", pot[i]);




	/* Designated initiallizers */
	int days[MONTHS] = { 31,28,[4] = 31,30,31,[1] = 29 }; // [n] 인덱스 지정
														  // 지정된 인덱스에 이어서.
	for (int i = 0; i < MONTHS; ++i)
		printf("%d ", days[i]);		// 지정이 안된것들은 0


	/* Specifying Array sizes */
	// 양의 정수만 가능 ( 0 안됨 )
	
	int arr1[MONTHS];	// Symbolic integer constant
	double arr2[123];	// Literal integer constant
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	//float arr5[-10];
	//float arr6[0];
	//float arr7[1.5];
	float arr8[(int)1.5];




	//int n = 8;
	//float arr9[n];	// Optional; vs X, gcc OK




	return 0;

}