#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

int main()
{	
	/* Motivation */
	//int i1 = 0;
	//int i2 = 1;
	//int i3 = 2;
	//// ...

	//printf("%d\n", i1);
	//printf("%d\n", i2);
	//printf("%d\n", i3);
	//// ...

	//int	my_arr[SIZE];

	//// prepare for array data
	//for (int i = 0; i < SIZE; ++i)
	//{
	//	my_arr[i] = i * i;

	//	1 + 2; // dummy : assignment 과정 보기
	//}

	//// print array data
	//for (int i = 0; i < SIZE; ++i)
	//	printf("%d ", my_arr[i]);

	//// TODO : try debugger - Autos, Watch


	/* PRACTICE */

	int input_arr[SIZE];
	int sum_arr = 0;


	
	for (int i = 0; i < SIZE; ++i)
	{
		printf("Enter %d numbers : ", SIZE - i);
		scanf("%d", &input_arr[i]);

	}

	for (int i = 0; i < SIZE; ++i)
	{
	
		sum_arr += input_arr[i];
	}

	printf("SUM OF YOUR NUMBUERS : %d", sum_arr);
	// for 문 기능별로 쪼개기
	return 0;

}