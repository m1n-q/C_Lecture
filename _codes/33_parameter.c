#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void draw(int n);	// ANSI function prototype declaration

int main()
{

	int i = 5;
	char c = '#';
	float f = 7.1f;


	// parameter로 자동 형변환

	draw(i);	// 5
	draw(c);	// 35
	draw(f);	// 7	

	// (int)f 등으로 의도를 명확하게 표현하는 것을 권장


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