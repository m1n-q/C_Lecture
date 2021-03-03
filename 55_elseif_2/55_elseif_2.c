#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	int num;
	scanf("%d", &num);

	if (num == 1)
		printf("One");
	else if (num == 2)		// 그렇지 않고 2라면?
		printf("Two");
	else if (num == 3)		// 그렇지 않고 3이라면?
		printf("Three");
							
	
	
	// 즉 앞조건에서 false 만족
	// 모두 !=1 만족,
	// 다음줄부터 !=1 , !=2 만족 ....


	

	 
	 
	/* 다음과 같은 구조다 ! */
	/* else if : 앞 조건과 엮인 nested 구조 */

	if (num == 1)
		printf("One");

	else					// 그렇지 않고
		if (num == 2)		// 2라면?
			printf("Two");

		else				// 그렇지 않고
			if (num == 3)	// 3이라면?
				printf("Three");




	/*if (num == 1)
		printf("1ST IF\n");
	else if (num == 1)		
		printf("2ND IF\n");
	else if (num == 1)		
		printf("3RD IF\n");



	if (num == 1)
		printf("1ST IF\n");
	if (num == 1)		
		printf("2ND IF\n");
	if (num == 1)		
		printf("3RD IF\n");*/


	if (num > 5)
		if (num < 10)
			printf(" 5 < %d < 10\n", num);

	else
		printf(" %d <= 5\n", num);

	// Compiler IGNORE INDENTING
	// 가장 가까운 if와 짝짓기.



	// {}


	return 0;

}