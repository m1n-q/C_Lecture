#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	/* 
		+=, -=, *=, %=/
		
		precedence : = 대입연산자와 같다
					 거의 꼴지 !

	*/

	/*
		
		어셈블리어 확인 : Debug - Windows - Disassembly
					     Break point - Debug mode - right button - go to disassembly
	
	
	*/



	int i = 1024;

	

	i = i + 10;
	i += 10;

// 차이? 1. 시간 재보기
//		 2. 어셈블리 코드 확인


	i %= 4;
	

	i* (1 + 2);


	i *= 1 + 2;
	i *= (1 + 2); // 더하기보다 우선순위 낮기 때문에 굳이 필요없음

	for (int i = 0; i < 10; i += 1)
		;
	







	return 0;

}