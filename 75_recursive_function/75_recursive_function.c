#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void my_func(int);

int main()
{	
	my_func(1);

	return 0;

}

void my_func(int n)			// parameter�� ���� n�� �ּҰ� ��� �ٲ�
{
	printf("Level %d, address of n = %p\n", n, &n);

	my_func(n + 1);

	
	//TODO: stop condition
	//TODO: tail recursion

}