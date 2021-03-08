#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float n1 = 3.14;	// 4bytes	
	double n2 = 1.234;	// 8bytes
	int n3 = 1024;		// 4bytes


	//printf("%f %f %d\n\n", n1, n2, n3);

	//Note tje warnings in output windows

	printf("%d %d %d\n\n", n1, n2, n3);			// 4, 4, 4	(N, N, N)
	// printf -> float을 stack에 8bytes double로 저장
	// 메모리 사이즈 다름. 값이 밀려서 잘 입력한 n3도 값이 달라짐
	
	
	printf("%lld %lld %d\n\n", n1, n2, n3);		// 8, 8, 4	(N, N, Y)
	// 읽어오는 byte 수는 잘 맞음, 출력 타입이 달라서 값이 바뀜 
	// (지수부. 가수부 등) 부동소수점 처리 방법으로 저장된 것을 정수로 출력하려니...

	printf("%f %d %d\n\n", n1, n2, n3);			// 8, 4, 4	(Y, N, N)
	// n2부터 메모리 사이즈가 달라짐. 밀림

	printf("%f %lld %d\n\n", n1, n2, n3);		// 8, 8, 4	(Y, N, Y)
	// 읽어오는 byte 수는 잘 맞음, 출력 타입이 달라서 값이 바뀜 
	// (지수부. 가수부 등) 부동소수점 처리 방법


	

	return 0;
	
}
