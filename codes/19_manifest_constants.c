#include <stdio.h>
#include <limits.h>	// INT_MAX, ...
#include <float.h>	// FLT_MAX, ...

#define PI 3.141592f // manifest constants, symbolic constants
					 // ��ũ��

int main()
{
	printf("PI is %f\n", PI);
	printf("MAX INT = %i\n", INT_MAX);
	printf("�� �ý��ۿ��� 1byte�� %f bits�Դϴ�.\n", CHAR_BIT);

	return 0;
}