#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	
	int i;

	//i = 1;
	//while (i < 5);			// infinite loop
	//	printf("Hi!\n");

	//i = 1;
	//while (--i < 5)			// wrong direction
	//	printf("Hi!\n");


	//i = 1;
	//while (i++ < 5)
	//	printf("Hi!\n");

	//i = 10;
	//while (i++ < 5)			// cannot enter
	//	printf("Hi!\n");


	/* Common mistakes */
	
	//i = 0;
	//while (i++ < 5)
	//	printf("Hi!\n");
	//	i++;					// {} ¾øÀ½ : indenting x


	//i = 0;
	//while (i++ < 5);			// null statement (;)
	//	printf("Hi!\n");

	//while (scanf("%d", &i) == 1)
	//	;						// null statement


}
