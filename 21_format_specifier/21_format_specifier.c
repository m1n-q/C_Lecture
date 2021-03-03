#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main()
{
	//	% [flags / width / .precision]  length specifier
	// flags : -, +, ' ', #, 0
	// width : num, *
	// precision : .num, .*

	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);		// - flags : 왼쪽 정렬
	printf("%+i %+i\n", 123, -123); // + flags : 부호 붙이기
	printf("% i\n% i\n", 123, -123);//' 'flags : + 는 빈칸, -는 부호

	printf("%X\n", 17);				// 16진수
	printf("%#X\n", 17);			// # flags : 진수표현(0x 등)
	printf("%05i\n", 123);			// 0 flags : 남는자리 0으로 채우기
									// 5 width
	
	printf("%*i\n", 7, 456);		// * width : width를 파라미터로 (7이 *자리로)



	printf("\nPrecision\n");		// 정수
	printf("%.3d\n", 1024);			// 정밀도 : 최소 자리수
	printf("%.5d\n", 1024);			// 최소까지 0으로채움


	printf("%.3f\n", 123456.1234567);	// 실수 : 소수점 이하 정밀도
	printf("%.3f\n", 123456.1235);		// 반올림

	

	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);

	printf("%.*f\n",20, 123.45678f);	// float 유효숫자 : 6개



	printf("%.5s\n", "ABCDEFGHIJKLMN"); // 정밀도 : 글자 개수 제한
	printf("%.s\n", "ABCDEFGHIJKLMN");	// %.s = %.0s ㅣ 기본값 0
	

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	//switch to x64

	sizeof(long long int);
}
