#include <stdio.h>


int main()
{
	float f = 0.123456789f;	// 리터럴 f	= float
	double d = 0.123456789;	// 리터럴 기본형 = double



	// %f : float, double 공통
	printf("%.9f\n", f);	//	float의 정밀도 = 6자리
	printf("%.9f\n", d);




	printf("float : %u byte\n", sizeof(float));
	printf("double : %u byte\n", sizeof(double));
	printf("long double : %u byte\n", sizeof(long double));	// 컴파일러마다 다름.8 or 12

	f = 123.456f;
	d = 123.456;

	float f2 = 123.456;		// warning : 두배 메모리를 사용하는 double이 float에 들어감.
	double d2 = 123.456f;	

	int i = 3;
	float f3 = 3.0f;
	double d3 = 3.0;		// float, double 형에 '.' 써주기

	float f4 = 1.234e10f;

	float f5 = 0x1.1p1;		// %0x : 16진수 - e 대신 p 사용
	double d5 = 1.0625e0;


	printf("%f %F %e %E\n", f, f, f, f);	// %e : scientific notation
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);				// %a : 16진수 실수로 출력
											// %x : 16진수 정수
	


}
	