#include <stdio.h>
#include <limits.h>	// INT_MAX, ...
#include <float.h>	// FLT_MAX, ...

#define PI 3.141592f // manifest constants, symbolic constants
					 // 매크로

int main()
{
	printf("PI is %f\n", PI);
	printf("MAX INT = %i\n", INT_MAX);
	printf("이 시스템에서 1byte는 %f bits입니다.\n", CHAR_BIT);

	return 0;
}