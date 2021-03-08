#include <stdio.h>
//#include <stdint.h> in inttypes.h
#include <inttypes.h>

int main()
{
	int i;				// int : 환경에 따라 2 or 4 bytes

	// type define 문법
	// 고정너비 정수
	int32_t i32;		// 32 bit integer


	int_least8_t i8;	// at least 8 bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integer
	uintmax_t uimax;	// biggest unsigned integer


	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);		// 세 구간으로 쪼갤 수 있음
	printf("me32 = %" PRId32 "\n", i32);	// 매크로(inttypes.h)	
											// 고정너비 정수형에 맞는 형식지정자가
											// 무엇인지 모를 때		
											// PRINT 32비트 정수 라는 뜻

	return 0;
}