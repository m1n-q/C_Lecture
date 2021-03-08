#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int tv, fv;
	tv = (1 < 2);
	fv = (1 > 2);

	printf("True is %d\n", tv);
	printf("False is %d\n", fv);


	int i = 5;
	while (i)		// 0 은 false, 0 외에는 true
		printf("%d is true\n", i--);
	printf("%d is false\n", i);



}
