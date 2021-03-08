#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	unsigned num;
	int isPrime = 1; //	flag, try bool type

	scanf("%u", &num);

	if (num == 2)
		;


	else if (num % 2 == 0)
		isPrime = 0;

	else 
	{
		for (unsigned i = 2; (i * i) <= num; i++)	// ¿Ö Á¦°ö ?¤»
		{
			
			if (num % i == 0)
			{
				//printf("%u ", i);
				isPrime = 0;
				break;
			}
		}

	}
	if (isPrime)
		printf("YOUR NUMBER %u IS A PRIME NUMBER !\n", num);
	else
		printf("YOUR NUMBER %u IS 'NOT' A PRIME NUMBER !\n", num);

	return 0;

}
