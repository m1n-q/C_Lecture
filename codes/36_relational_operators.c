#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h> // fabs()

int main()
{
	
	/* 
		Relational Operators (���迬����)

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


	//while (guess != PI)		// �Ǽ� �񱳽�, ��Ȯ�� ���е��� �����ϱ�.
	while (fabs(guess - PI) > 0.001) 
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);

	}
	printf("GREAT!");
	

}
