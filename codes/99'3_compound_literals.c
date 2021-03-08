#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define COLS 4


int sum_1d(int arr[], int n);

int main()
{
	int a = 1;

	3;
	3.14f;		// Literals : constants that aren't symbolic
				//			  즉, 이름 없는 애들

	int b[2] = { 3, 4 };

	(int[2]) {
		3, 4
	};	// compound literal

 // int c[2] = (int[2]){3, 4} // Error



	
	/* Usage of compound literal */	

	int arr1[2] = { 1, 2 };
	int arr2[2][COLS] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };



	printf("%d\n", sum_1d(arr1, 2));
	printf("%d\n", sum_2d(arr2, 2));
	printf("\n");


	/*  배열을 선언하지 않고 literal로 바로 집어넣을 경우 ! */

	printf("%d\n", sum_1d((int[2]) { 1, 2 }, 2));
	printf("%d\n", 
		sum_2d((int[2][COLS]) { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } }, 2));
	printf("\n");

	int* ptr1;
	int(*ptr2)[COLS];

	
	/*  배열을 선언하고 그 주소를 ptr에 넣는대신 literal로 바로  ! */

	ptr1 = (int[2]){ 1, 2 };
	ptr2 = (int[2][COLS]){ { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };

	printf("%d\n", sum_1d(ptr1, 2));
	printf("%d\n", sum_2d(ptr2, 2));
	





	return 0;

}

int sum_1d(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; ++i)
		total += arr[i];
	return total;

}

int sum_2d(int arr[][COLS], int rows)
{
	int total = 0;
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < COLS; c++)
			total += arr[r][c];
	return total;
}