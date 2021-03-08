#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	char a = 1;
	float b = 2;
	double c = 3;

	char* ptr_a = &a;		
	float* ptr_b = &b;		// 4bytes의 맨 앞(대표) 주소!
	double* ptr_c = &c;

	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));



	// 주소값을 출력하기 위한 사이즈임! 내용 상관 x

	// 건물이 크든 작든, 우편번호 사이즈는 같다!
	// try x64 : 8byte 주소체계
	return 0;

}