#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%u\n", sizeof(_Bool));	// 1 byte
									// 0,1 이기 때문에 1bit지만
									// 자료형이 주소를 배정받을 수 있는 최소 크기
					

	_Bool b1;
	b1 = 0;		// false
	b1 = 1;		// true


	printf("%d\n", b1);				// 따로 형식 지정자가 없다.


	bool b2, b3;
	b2 = true;
	b3 = false;
	
	printf("%d %d\n", b2, b3);		// true , false 판별 - NOT false = true
}