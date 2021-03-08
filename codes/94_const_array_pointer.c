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



	
	// arr2 �� const�ε� �ٸ� pointer �� �����ϸ� ������ �ȴ�?
	
	/*const*/ double* /*const*/ pd = arr2;
	*pd = 3.0;		// arr2[0] = 3.0; OK
					// pd[0] = 3.0;	OK

	pd[2] = 1024.0;	// arr2[2] = 1024.0;
	
	printf("%f %f\n", arr2[2], pd[2]);
	
	// const double *pd = arr2; arr2 ���� ���� ����.
	

	pd++;	// const�� ������ arr2 ���Ҵ� ���� �ȵ�����
			// pd ���� ���� ���� ����;;
			// ��, pd�� arr2[1] �� ����Ų��.

	printf("%f %f\n", arr2[2], pd[2]);	//try pd[1]
	// const double* const pd = arr2; arr2 ����, pd �� ���� �Ѵ� ����.
	

	/* NOTE
	
		���� �� pointer pd�� arr (�迭) ó�� �ε��� �� �� �ִµ�...

		case 1) double* pd 
		case 2) const double* pd
		case 3) double* const pd
		case 4) const double* const pd
		
	
	*/


	/*
		// �迭 ���� �ƴ� pointer�� index�� ����? ?

		int a = 1;
		int* ptr = &a;
		printf("%p\n", ptr[1]);

		ptr[1] = ptr + 2;
		printf("%p\n", ptr);
		printf("%p", ptr[1]);
	*/
	return 0;

}