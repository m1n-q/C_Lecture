#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	char a = 1;
	float b = 2;
	double c = 3;

	char* ptr_a = &a;		
	float* ptr_b = &b;		// 4bytes�� �� ��(��ǥ) �ּ�!
	double* ptr_c = &c;

	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));



	// �ּҰ��� ����ϱ� ���� ��������! ���� ��� x

	// �ǹ��� ũ�� �۵�, �����ȣ ������� ����!
	// try x64 : 8byte �ּ�ü��
	return 0;

}