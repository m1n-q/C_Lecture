#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	//int a;
	//printf("%p\n", &a);
	//printf("%d\n", a);		// �ʱ�ȭ ���ҽ� �����Ⱚ.

	

	//int *ptr;

	//printf("%p\n", ptr);	// �ʱ�ȭ ���ҽ� ptr = �����Ⱚ
	//printf("%d\n", *ptr);	// �����Ⱚ�̶�� �ּҷ� re-direction .

	

	//int* ptr = 1234;		// �ƹ����Գ� �ʱ�ȭ

	//printf("%p\n", ptr);	// ptr = 1234
	//printf("%d\n", *ptr);	// 1234��� �ּҷ� re-direction.
	//						// runtime error : �� ���α׷��� �Ҵ���� �޸𸮰� �ƴ�... 
	



	//int* safer_ptr;
	//int a = 123;
	//
	////safer_ptr = &a;		// ������ ������ Ȯ������ ���� ��찡 ����



	//int b;				// ���ǿ� ���� run-time�� �����Ǵ� ��찡 �� ����
	//scanf("%d", &b);

	//if (b % 2 == 0)		// �ʱ�ȭ�� ���� �ʴ� ��찡 �������!
	//	safer_ptr = &a;
	

	int a = 123;

	int* safer_ptr = NULL;

	int b;
	scanf("%d", &b);

	if (b % 2 == 0)
		safer_ptr = &a;

	if (safer_ptr != NULL)
		printf("%p\n", safer_ptr);

	if (safer_ptr != NULL)
		printf("%d\n", *safer_ptr);


	return 0;



}