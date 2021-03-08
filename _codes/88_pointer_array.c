#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int arr[10];

	int num = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < num; ++i)
		arr[i] = (i + 1) * 100;

	int* ptr = arr;		// = &arr[0]
	*ptr = -1;
	printf("%d", arr[0]);
	printf("%p %p %p\n", ptr, arr, &arr[0]);

	
	
	ptr += 2;			// 자료형 크기만큼!

	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);	
	
	// arr도 포인터처럼! (완전 동일하진 않아)
	// 배열 이름 => 자기 자신을 가리키는 포인터!!!!!!!!!!!!!!!



	//Note : arr += 2; // invalid
					   // 포인터 변수는 아니자나
					   // 배열 첫 주소가 바뀌면 안되자나




	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);	// re-direction




	// Warning
	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);



	
	/* pointer usage */
	ptr = arr;
	for (int i = 0; i < num; ++i)
	{
		printf("%d %d\n", *ptr++, arr[i]);	// * / ptr / ++ : ptr 에 대한 연산자	
											// *ptr / ptr++ 따로 연산됨.
		//printf("%d %d\n", *(ptr + i), arr[i]);
	}
	



	return 0;

}