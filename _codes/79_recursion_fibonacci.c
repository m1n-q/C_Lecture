#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


/*
	
	1, 1, 2, 3, 5, 8, 13 ...

	
	재귀 & 수열 다룰 때, 
	경계 조건 (맨 앞, 맨 뒤) 주시 !
	규칙의 예외 or 종료조건


*/


int fibonacci(int n);
int main()
{	
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));

	

	return 0;

}
int fibonacci(int n)
{
	if (n <= 2)			// 예외적인 (경계조건) 규칙
		return 1;
	else				// 
		return fibonacci(n - 1) + fibonacci(n - 2);

}

// pros. 구현이 간결

// cons. memory inefficiency, redundant computation
