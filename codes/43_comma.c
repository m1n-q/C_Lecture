#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
		printf("%d %d\n", n, nsqr);




	// comma operator
	// for (n, nsqr 선언 및 초기화 ; ; 1 expression -> 2 subexpression)
	// int n = 1, double d = 1.0; 은 안됨 
	// update 부 : 1 expression -> 2 subexpression - 2가지 기능 수행

	// printf의 commas : not comma operator, but seperator. 단순 구분.



	int i, j;
	i = 1;
	i++, j = i;		// comma = sequence point
					// sequence point 를 만나면 앞의 expression을 명확하게 값을 연산
					// 후위 연산자가 계산이 된다.
	printf("%d %d\n", i, j);
	

	int x, y, z;
	z = x = 1, y = 2; // = : right to left
					  // , : 꼴찌!
					  // x = 1 ( 식 자체 값 1 ) -> z = 1 -> y = 2 ( comma 왼쪽 -> 오른쪽 )

	
	printf("x=%d, y=%d, z=%d\n", x, y, z);

	z = ((x = 1), (y = 2));	// x = 1 -> y = 2 -> 괄호 안 expression 값 = 2 ( , 가장 오른쪽이 전체 expressiond의 값이 된다. )
	printf("x=%d, y=%d, z=%d\n", x, y, z);

	// int my_money = 123, 456; // error
	int my_money = (123, 456); 
	printf("%d\n", my_money);


	return 0;
}