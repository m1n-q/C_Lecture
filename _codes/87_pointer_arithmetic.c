#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int* ptr = 0;		// try other types

	//printf("%d", *ptr);

	printf("%p %lld\n", ptr, (long long)ptr);


	ptr++;	// try -=, ++, --, -, +
			// try other types
			// cf. array indexing ?

	printf("%p %lld\n", ptr, (long long)ptr);


	/* unary operator X  */

	//ptr = -ptr;
	//ptr = +ptr;	



	/* Subtraction */
	
	double arr[10];
	double* ptr1 = &arr[3], * ptr2 = &arr[5];

	//ptr2 = ptr1 + ptr2;		// NOT working
	int i = ptr2 - ptr1;		// meaning ?! 

								// -> array indexing

	
	printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
	

	/*					NOTE				 */
	/*
		// 배열 지정 안된 pointer의 연산도 같아!
	
		int a = 1;
		int b = 2;
		int* aptr = &a;
		int* bptr = &b;
		int j = aptr - bptr;
		printf("%lld %lld\n", (long long)aptr, (long long)bptr);
		printf("%d", j);
	*/
		

	/*
	    // pointer 숫자 차이가 sizeof()로 안떨어질때? 
	
		int a = 1;
		int b = 2;
		int* aptr = &a;
		int* bptr = (long long)&b + 1;
		int j = aptr - bptr;
		printf("%lld %lld\n", (long long)aptr, (long long)bptr);
		printf("%td", j);

		// (aptr - bptr) / sizeof()
		// 즉, 정수몫 나눗셈 한거..!
	*/


	return 0;

}