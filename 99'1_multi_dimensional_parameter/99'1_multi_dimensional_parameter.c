#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define ROWS 3
#define COLS 4





int sum2d_1(int ar[ROWS][COLS]);

int sum2d_2(int ar[][COLS], int row);
//int sum2d_2(int (*ar)[COLS], int row);

int sum2d_3(int* ar, int row, int col);


int main()
{	
	int data[ROWS][COLS] = {

								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }

													};

	printf("%d\n", data[2][3]);

	int* ptr = &data[0][0];
	printf("%d\n", *(ptr + 3 + COLS * 2));

	printf(" SUM = %d\n", sum2d_1(data));
	printf(" SUM = %d\n", sum2d_2(data, ROWS));
	printf(" SUM = %d\n", sum2d_3(data, ROWS, COLS));





	return 0;

}
int sum2d_1(int ar[ROWS][COLS])
{
	int total = 0;
	for (int r =0; r<ROWS;++r)
		for (int c = 0; c < COLS; ++c)
			total += ar[r][c];
	return total;

}

int sum2d_2(int ar[][COLS], int row)	// COLS개 ints의 배열 에 대한 포인터
//int sum2d_2(int (*ar)[COLS], int row)
{
	int total = 0;
	for (int r = 0; r < row; ++r)
		for (int c = 0; c < COLS; ++c)
			total += ar[r][c];
	return total;

}


int sum2d_3(int* ar, int row, int col)
{
	int total = 0;
	for (int r = 0; r < row; ++r)
		for (int c = 0; c < COLS; ++c)
			//total += *(*(ar + r) + c);
			total += *(ar + c + COLS * r);	// 1차원 배열을 2차원 배열로 사용하는 법!
	return total;

}

