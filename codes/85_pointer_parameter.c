#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	//printf("%p %p\n", &a, &b);

} 

void swap2(int* a, int* b)		// �ּҸ� �ްڴ�!
{	
	//printf("%p %p", a, b);	// ���� a, b�� ������ ����! (�ּҸ� ����Ŵ)
	int tmp = *a;				// re-direction
	*a = *b;
	*b = tmp;


}

int main()
{	
	int a = 123;
	int b = 456;

	printf("%d %d\n", a, b);
	
	//TODO: swap a, b

	//int tmp = a;
	//a = b;
	//b = tmp;
	//printf("%d %d\n", a, b);

	////TODO: function

	//swap(a, b);
	//printf("%d %d\n", a, b);	// Why failed?
	//
	// 
	//swap(a, b);
	//printf("%p %p\n", &a, &b);	// swap �Լ� �ȿ����� a, b �� ���� ����� �ٸ� ����! (parameter)
	//								// call by value : �Էµ� a, b �� ���� ������ argument�� ���޵��� ��
		

	//TODO: function2 
	
	swap2(&a, &b);				// parameter�� ������ : �ּҸ� �־������!
	printf("%d %d\n", a, b);	// call by pointer : �Էµ� &a, &b (�ּ�) �� argument�� ����
	

	return 0;

}