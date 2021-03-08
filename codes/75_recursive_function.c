#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void my_func(int);

int main()
{	
	my_func(1);

	return 0;

}

void my_func(int n)			// parameter에 들어가는 n의 주소가 계속 바뀜
{
	printf("Level %d, address of n = %p\n", n, &n);

	my_func(n + 1);

	
	//TODO: stop condition
	//TODO: tail recursion

}