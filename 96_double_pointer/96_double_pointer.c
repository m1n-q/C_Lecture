#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int a = 7;

	int* ptr = &a;		//	*ptr�� int��� ��

	
	printf("%d\n", *ptr);

	int** pptr = &ptr;	// **pptr�� int��� ��

	printf("%d\n", **pptr);

	

	return 0;

}