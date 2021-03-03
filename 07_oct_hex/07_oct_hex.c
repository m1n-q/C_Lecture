#include <stdio.h>

int main()
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;	//32
	unsigned int oct = 037777777777;
	unsigned int hex = 0xffffffff;	//8
	// 마우스를 올려보면 다 같은 수를 나타냄을 알 수 있다.



	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);
	// 각 진수별 리터럴을 이용하여 표현했지만, 10진수로 표현하면 같은 숫자다.

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
	// 10진수를 8진수, 16진수로
	// # : prefix ~ 진수 표현 

	return 0;
}