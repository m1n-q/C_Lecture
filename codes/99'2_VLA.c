#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int sum2d_4(int row, int col, int ar[row][col]);
// 변수로 배열 길이를 정할 수 있게 되면, 이런 선언도 가능하당!

int main()
{	
	/* Variable-Length Arrays */

	int n;

	printf("Input array length : ");
	scanf("%d", &n);

	
	float my_arr[n];	// Visual Studio X

	for (int i = 0; i < n; ++i)
		my_arr[i] = (float)i;

	for (int i = 0; i < n; ++i)
		printf("%f\n", my_arr[i]);




	return 0;

}