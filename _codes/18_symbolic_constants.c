#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592f //	리터럴로 입력하는 것보다 (3.141592f로 입력)
					 // define으로 기호적 상수 선언
					 // 전처리기 : PI 를 3.141592f로 교체한 뒤 compile
				     // 전처리 - 컴파일 - 링킹
#define MY_NAME "MINKYU"						
int main()
{	

	// const float pi = 3.141592f;	

	float radius, area, circum;
	
	printf("My name is %s\n", MY_NAME);
	printf("Input radius : \n");
	
	scanf("%f", &radius);

	area = PI * radius * radius; 

	circum = 2.0f * PI * radius;


	
	printf("Area is %f\n", area);
	printf("Curcumference is %f\n", circum);

	//TODO: wrong usage, strings, const
	
	return 0;
}