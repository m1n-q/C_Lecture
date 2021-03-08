#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n = 1;

	while (n < 3)			// stepover : F10
	{
		printf("%d\n", n);
		n = n + 1;

	}




/* 내부적으로는 다음과 같이 동작 */
//label :
//	printf("%d\n", n);
//	n += 1;
//	if (n == 11) goto out;
//
//	goto label;
//
//out:
	return 0;

}
