#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <limits.h>
#include <stdlib.h>



int main()
{
	unsigned int j = 0b11111111111111111111111111111111; // 이진수로 직접 입력
	unsigned int u = UINT_MAX; // 매크로
	unsigned int o = u + 1; // overflow : 범위 초과
	

	int i = INT_MAX; // singed integer



	//printf("%u\n", sizeof(unsigned int));	//	%u : sizeof 함수의 반환형은 unsinged int
	//printf("%u\n", sizeof(i));	// 4Bytes == 32bits ( 이진수 32개 )
	
	
	

	printf("%u\n", j);	// %u : unsigned integer
	printf("%d\n", u);	// %d : signed integer - overflow  


	printf("%d\n", i);	
	printf("%u\n", o);	// overflow ~ 1111 + 1 = 1_0000 같은 식으로 잘림.


	char buffer[33];		// 문자 33개를 메모리에 나란히 저장하는 배열 선언
	_itoa(u, buffer, 2);	// u 가 담고 있는 숫자를 이진수 형태로 (u = 4bytes = 32bits)
							// 반환형 = '문자'

	printf("decimal: %u\n", u);
	printf("binary: %s\n", buffer);

	printf("%u", UCHAR_MAX);





	return 0;
}