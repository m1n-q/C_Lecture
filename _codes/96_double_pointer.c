#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int a = 7;

	int* ptr = &a;		//	*ptr이 int라는 뜻

	
	printf("%d\n", *ptr);

	int** pptr = &ptr;	// **pptr이 int라는 뜻

	printf("%d\n", **pptr);

	

	return 0;

}