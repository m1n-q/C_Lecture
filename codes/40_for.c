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


	
	
	
	

	/* for �� ���� ���� */
	i = 1;
	/*while (i++ <= 10)
	{
		printf("%d ", i);
	}
	printf("%d", i);
	printf("\n");*/








	for (i = 1; i <= 10; i++) // (ù ���࿡�� ������ �κ��� �ôµ�..?)
    {
		printf("%d ", i);
		// i++; �� �ִ� ��ó��!?
	}
	printf("%d", i);
	printf("\n");
	
	/*
			
		Step 1: Execute Initialise (Which is 1 for you, so i=1)
		Step 2: Evaluate Condition: If false,end the loop. If true go to next step. (It's True in your case. The value of a is still 1)
		Step 3: Execute Body (value of a is still 1)
		Step 4: Execute updation and go back to Step2 (This is where 'i' becomes 1 for your )
	
	*/
	
	for (i = 1; i++ <= 10; )	// �̰� Step 2���� i++�̴ϱ�!
	{
		printf("%d ", i);

	}
	printf("%d", i);
	printf("\n");




}