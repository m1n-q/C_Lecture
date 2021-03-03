#define _CRT_SECURE_NO_WARNINGS
// scanf 오류 발생시 작성
// properties - preprocessor definition 에서도 가능 (debug모드에서)

#include <stdio.h>

const int angel = 1004;
// 제한자 / 자료형 / 기호적 상수 / 리터럴 상수
// const 제한자를 붙여 변수 angel 을 상수화함

int main() 
{
	int i = 0;


	// scan formatted
	// 콘솔창에 입력된 값을 스캔
	// & (ampersand) : 변수 자체가 아닌 변수의 '주소'를 받는다!

	// %d : 정수 형태로 입력을 받음
	// 입력된 값을 해당 주소 메모리에 직접 접근, 덮어쓴다
	
	scanf("%d", &i); 

	// 오류 발생
	// _CRT_SECURE_NO_WARNINGS 사용하라는 메세지.




	printf("Value is %d\n", i);

} 