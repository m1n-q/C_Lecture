#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <float.h>
int main()
{

	double d = 3.14159265358979323846;


	printf("%f %f %.f\n", 3.141592f, d, d); // l in %lf is ignored
											// printf ���������� %f�� double�� ���.

	printf("%.10f %.10f %.10f\n", 3.141592f, d, d); // ù��°�� float ���ͷ� - 6�ڸ� ���е�������
													// d�� %f������ ���е� ���� (�߸� �κ��� �ݿø�)
													// %f�� double�� ����̶�� ��!
	
	printf("%p\n", &d); // pointer-of operator 
						// �� ������ ����ϰ� �ִ� �޸� �ּ�

	printf("%%\n");

	printf("%9d\n", 12345);		// 9�ڸ� ���
	printf("%09d\n", 12345);	// ��ĭ�� 0���� ä�� 9�ڸ�
	printf("%-9d\n", 12345);	// ���� ����

	printf("%.3f\n", 3.141592f); 
	printf("%.20f\n", d);		// double Ÿ���� �޸� ����
	printf("%.20lf\n", d);		// ��

	int n_printed = printf("return ? ");
	printf("%d", n_printed);	// printf �Լ��� return = count
}
