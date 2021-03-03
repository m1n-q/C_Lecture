#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>		// and, or, not : ���̴� �Ƚ��

#define PERIOD '.'

int main()
{	
	/*
		Logical Operators

		

		&& : and	���� : �ϳ��� false�� false
		|| : or		���� : �ϳ��� true�� true
		 ! : not	����

	*/

	//bool test1 = 3 > 2 || 5 > 6;	// true
	//bool test2 = 3 > 2 && 5 > 6;	// false
	//bool test3 = !(5 > 6);			// not(false) == true, 5<=6

	//printf("%d %d %d\n", test1, test2, test3);




	//char ch;
	//int count = 0;

	//while ((ch = getchar()) != PERIOD)
	//{
	//	if (ch!='\n' && ch!=' ')
	//		count++;
	//}

	//printf("%d", count);

	/*
		Precedence ? 

		���� : �ſ� ���� ��. && -> || -> ?: -> =
		���� : �ſ� ���� ��, () > !


	*/

	//int a = 1, b = 2, c = 3, d = 4;
	//
	//a > b && b > c || b > d;
	//((a > b) && (b > c)) || (b > d);	// && > ||
	//									// ��ȣ ������ �׳�




	/*
		Short - circuit Evaluation

		- Logical expressions are evaluated from left to right
		- && and || are sequence points
		
	*/

	//int temp = (1 + 2) * (3 + 4);	// � ��ȣ�� ���� ������ �𸥴�. 

	//printf("Before : %d\n", temp);

	//if (temp == 0 && (++temp == 1024))
	//{

	//}

	//printf("After : %d\n", temp);	// if���� && ���� ���� ������� ����.
	//								// �ϳ��� false�� false�� ������	
	//								// ���� expression�� false���� 
	//								// �޺κ��� evaluation���� �ʾҴ�.
	//								
	//								
	//								
	//								// true�� ��쿡�� ������Ѿ� �ϴ� �Լ� && �̿�?




	//int x = 1, y = 2;
	//if (x++ > 0 && x + y == 4)		// &&, || : sequence point
	//								// ++ ������ �Ǿ x + y == 4 ���� !
	//	printf("%d %d\n", x, y);	// sequence point : ������ ���� expression�� ���ȴ�.
	//								// ';', ')', &&, ||



	/* Range expression */

	//for (int i = 0; i < 100; ++i)
	//	//if (10 <= i <= 20)	// == if((10<=i)<=20)
	//	if (i >= 10 && i <= 20)
	//		printf("%d ", i);





	return 0;
}