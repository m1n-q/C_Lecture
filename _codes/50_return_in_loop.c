#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// scope �� ���� 

int computer(int base, int exp);	// prototype 
									// ������ : �� �Լ� ������, 
									//          base, exp �־ result �޾ƿ��� �׷��� �ִ�.
									//			�ȿ��� ��� ����ϴ����� �Ű澲�� ����!
									//          �и��ؼ� ������.
									// ��ŷ : ���⼭ ��ü�� ���������.


int main()
{	
	int base, exp;


	while (printf("Input base & exp : "), scanf("%d %d", &base,&exp)==2)
	{

		
		printf("RESULT : %d\n", computer(base, exp));

	}

	return 0;
	
	// while ( A,B ) : A�� ������ �ϵ�, B�� ���� �����մϴ�.

}

int computer(int base, int exp)
{
	int result = 1;


	for (int i = 0; i < exp; ++i)
		result *= base;

	return result;

}