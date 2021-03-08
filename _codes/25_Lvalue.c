#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()

// Object : 데이터가 '메모리' 안에 존재할 때, Data object
// LValue , RValue : if Object or not.
//				     메모리 공간을 차지하는가? Object, LValue


{
								// L-Value : 메모리를 차지하는 데이터 객체 (수정 가능 여부가 아님)
								// R-Value : 수정 가능한 L-Value에 대입될 수는 있지만
								//			 자기 자신은 L-Value가 될 수 없음


	int a, b, c;				// a, b, c 는 수정 가능한 L-Value
						
	const int TWO = 2;			// TWO 는 수정 불가능한 L-Value 
								// (= 는 대입이 아니라 초기화!)

	a = 42;						// 42 는 R-Value
	b = a;						// a가 가진 값을 꺼냄, b에 대하여 임시적인 R-Value 역할
	c = TWO * (a + b);			// (a+b)는 R-Value 
								// 메모리를 따로 부여받지 않음
								// (프로그램이 계산하는 임시값, 끝나면 사라짐)
}
