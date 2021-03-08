#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// ���Թ��� ���� ����ϴ� ǥ�����̴�!
	// ������ side effect
	int c, d;
	c = 0;
	d = 3 + (c = 1 + 2);	// 3 + 3
	printf("c = %d, d = %d\n", c, d);

	// �񱳽ĵ� ǥ����
	c = 2 > 1;	// 1
	d = 1 > 2;	// 0
	printf("%d", c + d);


	/* Statements */

	int x, y, apples;	// declaration statement
	apples = 3;			// assginment statement
	;					// null statement
	
	7;
	1 + 2;
	x = 4;
	++x;				// expression + ; : statement
	
	x = 1 + (y = 5);	// y = 5 : subexpression	
						// expression �� �Ϻ�
	
	
	while (x++ < 10)	// while statement (structured statements)
		y = x + y;
	
	printf("%d\n", y);	// function statement
	
	
	//return 0;			// return statement


	/* Side Effects & Sequence Points */

	// Sequence Points : ���� ���� ����ϴ°�? 
	//					 ';' �� ��������, �� ���� expression ����� �ص� �Ǵ±���!



	x = 4;	// main intent : evaluating expression
			// side effect : assignment


	while (x++ < 10)		// (x++ < 10) ��ü��  full expression	
							// ';' �� �ƴ� ')' �� �������� ++ ��� (Ư���� �����.)
		printf("%d\n", x);




	x = 0;

	y = (4 + x++) + (6 + x++);	// �� ��ȣ ��� subexpression (full x)
								// ���� ������ ��ȣ�ϴ�.
								// �����Ϸ����� �ٸ� �� ���� ( ';' / ')' )
								// �� ���忡�� ������ ����� ���� �ʴ�!

	printf("x= %d, y = %d",x, y);




}
