#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
	������ ��ȯ ���

	10
	10 / 2 = 5, remainder = 0
	 5 / 2 = 2, remainder = 1
	 2 / 2 = 1, remainder = 0
	 1 / 2 = 0, remainder = 1


*/

void to_binary(unsigned long n);
void loop_to_binary(unsigned long n);

int main()
{	
	unsigned long num = 10;

	loop_to_binary(num);
	printf("\n");
	to_binary(num);

	printf("\n");


	return 0;

}

void to_binary(unsigned long n)
{
	unsigned rmd;
	if (n / 2)
		to_binary(n/2);

	// recursion���� ���������鼭 �����! ��, recursion ���� �������� �����!
	rmd = n % 2;
	printf("%u", rmd);

}
void loop_to_binary(unsigned long n)
{
	unsigned rmd[100];
	int i;
	for (i = 0; n > 0; n /= 2)
		rmd[i++] = n % 2;
	i--;

	for (i; i >= 0; --i)
		printf("%u", rmd[i]);

}