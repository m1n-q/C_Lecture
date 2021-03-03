#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main2()
{
	int i = 0, j = 0;
	// 변수는 무조건 초기화 하는 것을 권장.

	printf("Input two integer\n");
	scanf("%d%d", &i, &j);




	printf("%d + %d = %d\n", i, j, i + j);
	return 0;

}