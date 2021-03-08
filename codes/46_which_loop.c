#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	/* 
			진입조건 vs 탈출조건 
		while, for		do-while

	*/

	/* 
	

		for(;test;)						while(test)

		for (init;test;update)			init;
										while(test)
			body;						{
											body;
											update;
										}

	*/

	/* 
		대표적 사례

		Counting							Indefinite

		for (int i = 0; i < 100; ++i)		while(scanf("%d",&num) == 1)
		
	*/

	return 0;

}