#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	
	ptr1 = arr;		// �迭 ������ ��ü�� �ּ�ó�� �۵�, & �ʿ����.

	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);	
	// ptr1�� ���� �ּ�, dereferencing, ptr1 ��ü �ּ�

	
	
	ptr2 = &arr[2];
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	
	
	//Add
	ptr3 = ptr1 + 4;	// ptr1 + sizeof(int) * 4
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	int a;
	double* ptr = &a;	// sizeof �� ptr���� �����̴�.
	printf("%lld %lld", (long long)ptr, (long long)(ptr + 1)); // added 8, not 4



	//Differencing
	printf("%td\n", ptr3 - ptr1);	// %t : pointer difference

	ptr3 = ptr3 - 4;	// ptr1 - sizeof(int) * 4
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);


	return 0;

}