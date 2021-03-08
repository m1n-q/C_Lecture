#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	
	ptr1 = arr;		// 배열 변수는 자체가 주소처럼 작동, & 필요없어.

	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);	
	// ptr1이 담은 주소, dereferencing, ptr1 자체 주소

	
	
	ptr2 = &arr[2];
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	
	
	//Add
	ptr3 = ptr1 + 4;	// ptr1 + sizeof(int) * 4
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	int a;
	double* ptr = &a;	// sizeof 는 ptr변수 기준이다.
	printf("%lld %lld", (long long)ptr, (long long)(ptr + 1)); // added 8, not 4



	//Differencing
	printf("%td\n", ptr3 - ptr1);	// %t : pointer difference

	ptr3 = ptr3 - 4;	// ptr1 - sizeof(int) * 4
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);


	return 0;

}