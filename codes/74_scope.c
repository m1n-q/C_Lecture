#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



//int a;							// file ���� ���� : file ��ü���� ���!


int int_max(int i, int j); // ����

int int_max(int i, int j)  // ����
{
	//a = 456;						// in_function�� ��ȿ�� scope : �Լ��� block ��
	int in_function;				// ���� ����!
	in_function = i > j ? i : j;
	return in_function;				
}


int main()
{	
	//in_function = 123;

	int a;							
									
	a = int_max(1, 2);

	//in_function = 123;


	printf("%d\n", a);
	printf("%p\n", &a);

	{	/* new scope */

		int a;						// �� ������ ������ ���� �������� a  ( �켱���� - stack! )
									// ������, ū ������ a ���!

		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);
		
	}

	printf("%d\n", a);
	printf("%p\n", &a);				// ���� ������ a�� ���� �Ұ�! ( scope�� ������ stack���� �����!)


	return 0;

}

