#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int a, b;

	a = 123;

	int *a_ptr;		// a_ptr ( �ּ� ���� ���� ) �� int �� �ƴ�
					// *a_ptr : a_ptr�� ��� �ּҸ� ���󰡸� ������ ������ int
					// "int�� ������ �ּ�" �� ���� ������� ��!

	/*
	char* c_ptr;
	long long *ll_ptr;

	sizeof(c_ptr);
	sizeof(ll_ptr);
	*/


	a_ptr = &a;		// & : �ּ� ������, ������ ����ϴ� �޸��� ���� "ù��° �ּ�"
					// a �� 4bytes int �̹Ƿ� 4ĭ�� ��ĭ ������ ����


	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr = 456;	// * : re-direction (���� ����)

	printf("%d %d %p\n", a, *a_ptr, a_ptr);




	//b = a_ptr;
	b = *a_ptr;
	
	printf("%d\n", b);

	*a_ptr = 789;	

	printf("%d\n", b);		// b �� ���� ������ ���̱� ������, �״�� 456
	printf("%d %d %p\n", a, *a_ptr, a_ptr);




	b = 12;
	printf("%d\n", b);		
	printf("%d %d %p\n", a, *a_ptr, a_ptr);


	a = 1004;				// ������ ���� ����!
	printf("%d %d %p\n", a, *a_ptr, a_ptr);		// ptr�� �ص� ����

	return 0;

}