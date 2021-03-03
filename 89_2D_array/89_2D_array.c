#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int arr[2][3] = { {1,2,3},			// [row][column]
					  {4,5,6} };		// [2][3] : 3�� ¥���� 2�� �ִ�.

	// in memory? �ᱹ 1����! 
	// [0][0], [0][1], [0][2], [1][0], [1][1], [1][2]


	//int arr[2][3] = { 1,2,3,			// 1���� �迭ó�� ���� ����
	//				  4,5,6 };		
	
	//int arr[2][3] = { 1,2 };			/* Partially initialized */
	
	//printf("%d\n\n", arr[1][1]);


	//for (int i = 0; i < 2; ++i)
	//{
	//	for (int j = 0; j < 3; ++j)
	//		printf("%d ", arr[i][j]);	// 1���� �޸�! ����� ������� �о������ for�� �ۼ�������
	//	
	//	printf("\n");
	//}



	/* 1���� �迭ó�� ����ϱ� */
	int* ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		printf("%d ", ptr[k]);		
	printf("\n\n");


	/* inner array size */
	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
	printf("\n");






	return 0;

}