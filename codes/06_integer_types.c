#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <limits.h>
#include <stdlib.h>







int main()
{
	char c = 65;
	short s = 200;
	int i = 2000000000;
	unsigned int ui = 3000000000U;	// U : unsigned의 리터럴 표현 (컴파일러가 알아서 처리하긴 함)
	long l = 65537L;
	long long ll = 12345678908642LL;
	
	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);
	printf("signed int  = %d, %hd\n", i, i);
	printf("unsigned int = %u, %d\n", ui, ui);
	printf("long = %ld, %hd, %hu\n", l, l, l);	// %hd : short, ~32767 %hu : unsigned short, ~65535


	printf("long long = %lld, %d, %d, %ld, %ld\n",ll, ll, ll, ll, ll);
	// 왜 다르지 ...?
	
}