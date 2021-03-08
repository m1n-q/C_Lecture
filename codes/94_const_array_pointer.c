#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	// type qualifiers : const, volatile, ...

	/*const*/ double PI = 3.14159;
	PI = 2.14159;

	/*const*/ int arr[5] = { 1,2,3,4,5 };
	arr[1] = 123;

	const double arr2[3] = { 1.0,2.0,3.0 };
	//arr2[0] = 100.0;



	
	// arr2 는 const인데 다른 pointer 로 접근하면 변경이 된다?
	
	/*const*/ double* /*const*/ pd = arr2;
	*pd = 3.0;		// arr2[0] = 3.0; OK
					// pd[0] = 3.0;	OK

	pd[2] = 1024.0;	// arr2[2] = 1024.0;
	
	printf("%f %f\n", arr2[2], pd[2]);
	
	// const double *pd = arr2; arr2 원소 접근 막음.
	

	pd++;	// const로 막으면 arr2 원소는 변경 안되지만
			// pd 변수 값은 변경 가능;;
			// 즉, pd가 arr2[1] 을 가리킨다.

	printf("%f %f\n", arr2[2], pd[2]);	//try pd[1]
	// const double* const pd = arr2; arr2 원소, pd 값 접근 둘다 막음.
	

	/* NOTE
	
		원래 새 pointer pd를 arr (배열) 처럼 인덱싱 할 수 있는데...

		case 1) double* pd 
		case 2) const double* pd
		case 3) double* const pd
		case 4) const double* const pd
		
	
	*/


	/*
		// 배열 대입 아닌 pointer에 index로 접근? ?

		int a = 1;
		int* ptr = &a;
		printf("%p\n", ptr[1]);

		ptr[1] = ptr + 2;
		printf("%p\n", ptr);
		printf("%p", ptr[1]);
	*/
	return 0;

}