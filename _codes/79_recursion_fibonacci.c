#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


/*
	
	1, 1, 2, 3, 5, 8, 13 ...

	
	��� & ���� �ٷ� ��, 
	��� ���� (�� ��, �� ��) �ֽ� !
	��Ģ�� ���� or ��������


*/


int fibonacci(int n);
int main()
{	
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));

	

	return 0;

}
int fibonacci(int n)
{
	if (n <= 2)			// �������� (�������) ��Ģ
		return 1;
	else				// 
		return fibonacci(n - 1) + fibonacci(n - 2);

}

// pros. ������ ����

// cons. memory inefficiency, redundant computation
