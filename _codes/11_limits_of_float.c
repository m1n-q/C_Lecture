#include <stdio.h>
#include <float.h>
#include <math.h>
int main()
{
	// 정밀도 오류
	//float a, b;

	//a = 1000.0f + 1.0f;
	//b = a - 1000.0f;

	//printf("%f\n", b);		// 1

	//a = 1.0e20f + 1.0f;		
	//b = a - 1.0e20f;		

	//printf("%f\n", b);		// 위에처럼 1이 나와야 하는데?


	//printf("%f\n", 1.0e20f);
	//printf("%f\n", a);		// 너무 큰 숫자에서 1이 안더해짐...

	
							
	// round-off errors 2
	//float a1 = 0.0f;

	//for(int i =0; i<100 ; i++)
	//{
	//	a1 = a1 + 0.01f;	// 부동소수점 표현법에서는 0.01을 표현할 수 없다.
	//}						// fraction 부분이 이진수 (1/2, 1/4) 등의 조합이기 때문.
	//	

	//printf("%f\n", a1);		// 그 오차가 누적된 결과



	// overflow
	//float max = FLT_MAX;
	//printf("%f\n", max);	// 
	//
	//max = max * 100.0f;
	//printf("%f\n", max);	// inf : infinite, 뭔지 모르겠다!


	// underflow
	//float min = FLT_TRUE_MIN;
	//printf("%e\n", min);

	//min = min / 2.0f;
	//printf("%e\n", min);	// subnormal : 숫자가 사라져버림. 잃어버린 숫자.


	// division by zero

	float f = 104.0f;
	f = f / 0.0f;
	printf("%f\n", f);


	float af = asinf(2.0f);
	printf("%f\n", af);		// nan : not a number, 수학적으로 계산 불가. ( -1<sin<1 )




}