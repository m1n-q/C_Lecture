#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h> // fabs()

int main()
{
	
	/* 
		Relational Operators (관계연산자)

		<
		<=
		==
		>=
		>
		!=
	
	*/


	//int n = 0;
	//while (n++ < 5)
	//	printf("%d ", n);

	//printf("\n");

	//char c = 'A';
	//while (c != 'Z')
	//	printf("%c ", c++);


	const double PI = 3.14159265358973;
	double guess = 0.0;
	printf("Input PI : ");
	scanf("%lf", &guess);


	//while (guess != PI)		// 실수 비교시, 정확한 정밀도는 어려우니까.
	while (fabs(guess - PI) > 0.001) 
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);

	}
	printf("GREAT!");
	

}
