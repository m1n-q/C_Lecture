#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// Indefinite loop vs. Counting loop

	//while(1)
	//{
	//	// do sth
	//}

	/* 
		Counting Loop
		1. Counter initialization
		2. Counter check
		3. Counter change
	*/

	//int i;
	//	
	//i = 1;				// 1. initialization

	//while (i <= 10)		// 2. check
	//{
	//	
	//	printf("%d", i);	
	//	i++;				// 3. change

	//}
	
	
	int i;
	//for (i = 1; i <= 10; i++)	// 1, 2, 3
	//{
	//	printf("dummy ");
	//	printf("%d ", i);
	//}
	//printf("%d\n", i);


	
	
	
	

	/* for 문 연산 순서 */
	i = 1;
	/*while (i++ <= 10)
	{
		printf("%d ", i);
	}
	printf("%d", i);
	printf("\n");*/








	for (i = 1; i <= 10; i++) // (첫 실행에서 증감식 부분은 씹는듯..?)
    {
		printf("%d ", i);
		// i++; 이 있는 것처럼!?
	}
	printf("%d", i);
	printf("\n");
	
	/*
			
		Step 1: Execute Initialise (Which is 1 for you, so i=1)
		Step 2: Evaluate Condition: If false,end the loop. If true go to next step. (It's True in your case. The value of a is still 1)
		Step 3: Execute Body (value of a is still 1)
		Step 4: Execute updation and go back to Step2 (This is where 'i' becomes 1 for your )
	
	*/
	
	for (i = 1; i++ <= 10; )	// 이건 Step 2에서 i++이니까!
	{
		printf("%d ", i);

	}
	printf("%d", i);
	printf("\n");




}