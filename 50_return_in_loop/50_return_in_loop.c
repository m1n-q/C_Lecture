#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// scope 와 변수 

int computer(int base, int exp);	// prototype 
									// 컴파일 : 이 함수 만나면, 
									//          base, exp 넣어서 result 받아오는 그런게 있다.
									//			안에서 어떻게 계산하는지는 신경쓰지 마라!
									//          분리해서 컴파일.
									// 링킹 : 여기서 몸체를 연결시켜줌.


int main()
{	
	int base, exp;


	while (printf("Input base & exp : "), scanf("%d %d", &base,&exp)==2)
	{

		
		printf("RESULT : %d\n", computer(base, exp));

	}

	return 0;
	
	// while ( A,B ) : A도 실행을 하되, B만 조건 검토합니당.

}

int computer(int base, int exp)
{
	int result = 1;


	for (int i = 0; i < exp; ++i)
		result *= base;

	return result;

}