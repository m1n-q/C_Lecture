#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*

	loop vs recursion

	factorial : 3! = 3 * 2 * 1
				0! = 1
				5! = 5 * 4!
				   = 5 * 4 * 3!
				   = ...
				  

*/

long loop_factorial(int n); 
long recursive_factorial(int n);


int main()
{	
	int num = 5;

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));

	return 0;

}

long loop_factorial(int n)
{
	long fac;

	for (fac = 1; n > 0; --n)
		fac *= n;
	
	return fac;

}


long recursive_factorial(int n)
{
	if (n == 0)
		return 1L;
	else
		return n * recursive_factorial(n - 1);		// tail (end) recursion : return 바로 뒤에 재귀 구현

}
