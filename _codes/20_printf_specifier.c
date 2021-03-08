#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <float.h>
int main()
{

	double d = 3.14159265358979323846;


	printf("%f %f %.f\n", 3.141592f, d, d); // l in %lf is ignored
											// printf 내부적으로 %f도 double을 출력.

	printf("%.10f %.10f %.10f\n", 3.141592f, d, d); // 첫번째는 float 리터럴 - 6자리 정밀도이지만
													// d는 %f에서도 정밀도 유지 (잘린 부분은 반올림)
													// %f가 double의 출력이라는 것!
	
	printf("%p\n", &d); // pointer-of operator 
						// 이 변수가 사용하고 있는 메모리 주소

	printf("%%\n");

	printf("%9d\n", 12345);		// 9자리 출력
	printf("%09d\n", 12345);	// 빈칸을 0으로 채운 9자리
	printf("%-9d\n", 12345);	// 왼쪽 정렬

	printf("%.3f\n", 3.141592f); 
	printf("%.20f\n", d);		// double 타입의 메모리 제한
	printf("%.20lf\n", d);		// 상동

	int n_printed = printf("return ? ");
	printf("%d", n_printed);	// printf 함수의 return = count
}
