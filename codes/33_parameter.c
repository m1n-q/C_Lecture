#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void draw(int n);	// ANSI function prototype declaration

int main()
{

	int i = 5;
	char c = '#';
	float f = 7.1f;


	// parameter�� �ڵ� ����ȯ

	draw(i);	// 5
	draw(c);	// 35
	draw(f);	// 7	

	// (int)f ������ �ǵ��� ��Ȯ�ϰ� ǥ���ϴ� ���� ����


	/* Parameters vs.  Arguments */
	
	// Parameter -> variables : draw(int n) 
	// Argument  -> values : draw(i)


	return 0;

}

void draw(int n)
{
	
	while ( n-- > 0)
		printf("*");
	printf("\n");
}