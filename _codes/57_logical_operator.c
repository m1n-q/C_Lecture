#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>		// and, or, not : 많이는 안써용

#define PERIOD '.'

int main()
{	
	/*
		Logical Operators

		

		&& : and	이항 : 하나만 false면 false
		|| : or		이항 : 하나만 true면 true
		 ! : not	단항

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

		이항 : 매우 낮은 편. && -> || -> ?: -> =
		단항 : 매우 높은 편, () > !


	*/

	//int a = 1, b = 2, c = 3, d = 4;
	//
	//a > b && b > c || b > d;
	//((a > b) && (b > c)) || (b > d);	// && > ||
	//									// 괄호 쓰세요 그냥




	/*
		Short - circuit Evaluation

		- Logical expressions are evaluated from left to right
		- && and || are sequence points
		
	*/

	//int temp = (1 + 2) * (3 + 4);	// 어떤 괄호가 먼저 계산될지 모른다. 

	//printf("Before : %d\n", temp);

	//if (temp == 0 && (++temp == 1024))
	//{

	//}

	//printf("After : %d\n", temp);	// if에서 && 뒤의 값이 실행되지 않음.
	//								// 하나만 false면 false기 때문에	
	//								// 왼쪽 expression이 false여서 
	//								// 뒷부분을 evaluation하지 않았다.
	//								
	//								
	//								
	//								// true일 경우에만 실행시켜야 하는 함수 && 이용?




	//int x = 1, y = 2;
	//if (x++ > 0 && x + y == 4)		// &&, || : sequence point
	//								// ++ 연산이 되어서 x + y == 4 만족 !
	//	printf("%d %d\n", x, y);	// sequence point : 만나면 앞의 expression이 계산된다.
	//								// ';', ')', &&, ||



	/* Range expression */

	//for (int i = 0; i < 100; ++i)
	//	//if (10 <= i <= 20)	// == if((10<=i)<=20)
	//	if (i >= 10 && i <= 20)
	//		printf("%d ", i);





	return 0;
}