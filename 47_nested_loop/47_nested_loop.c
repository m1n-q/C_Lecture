#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	//for (int i = 0; i++ < 5;)
	//{
	//	for (char c = 'A'-1; c++ < 'K';)
	//	{
	//		printf("%c ", c);

	//	}
	//	printf("\n");
	//}


	char last = 'A';
	//for (int i = 0; i++ < 10;)
	//{	
	//	;

	//	for (char c = 'A' - 1; c++ < last;)
	//	{
	//		printf("%c ", c);

	//	}

	//	last++;
	//	printf("\n");
	//}


	//for (int i = 0; i++ < 10;)
	//{

	//	// inner - outer ¿¬°á !

	//	for (char c = 'A' - 1; c++ < 'A' - 1  + i;)
	//	{
	//		printf("%c ", c);

	//	}

	//	
	//	printf("\n");
	//}


	//for (int r = 12; r > 0; r--)
	//{
	//	
	//	for (char c = 'A'; c < 'A' + r; c++)
	//	{
	//		printf("%c ", c+12-r);
	//	}
	//	printf("\n");

	//}	// ¹Ø¿¡ ÄÚµå¶û »ý°¢À» ºñ±³ÇØºÁ.
	
	
	for (int r = 0; r < 12; r++)
	{

		for (char c = 'A' + r; c < 'A' + 12; c++)
		{
			printf("%c ", c);
		}
		printf("\n");
				
	}

	return 0;

}