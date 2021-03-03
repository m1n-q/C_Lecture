#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
#include "my_print.h"

/* 

	header로 모아 놓으므로써
	1. 간단하게 볼 수 있고
	2. 여러번 재사용

*/



int main()
{	
	print_hello();
	print_hi();
	print_hello();
	print_str("Ramen good");
	print_hello();

	printf("HELLO");


	return 0;

}