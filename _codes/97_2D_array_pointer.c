#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	/*  1���� �迭 2�� ����, �������� �迭��  */

	//int arr0[3] = { 1, 2, 3 };
	//int arr1[3] = { 4, 5, 6 };

	//int* parr[2] = { arr0, arr1 };	// array of pointer
	//// arr0 : 1�� ����Ű�� ������ (1�� �ּҸ� ���� arr0)
	//// parr




	//for (int i = 0; i < 2; ++i)
	//{
	//	for (int j = 0; j < 3; ++j)
	//		printf("%d(==%d, %d)  ",
	//			  parr[i][j],			// 1. 2���� �迭ó��

	//			*(parr[i] + j),			// 2. �迭�� ���ҿ� ������ ����

	//			*(*(parr + i) + j));	// 3. �迭���� ������ó��, ���������� ����
	//	
	//	printf("\n");
	//}



	/*  2���� �迭 ����, 2���� �����ͷ�  */

	//int arr[2][3] = { { 1, 2, 3 }, 
	//				  { 4, 5, 6 } };

	//int* parr0 = arr[0];
	//int* parr1 = arr[1];

	


	/*  2���� �迭 ����, �������� �迭��  */

	int arr[2][3] = { { 1, 2, 3 },
					  { 4, 5, 6 } };

	//parr[0] = arr[0];		// parr[0] : ������ �ڸ�
	//parr[1] = arr[1];
	int* parr[2] = { arr[0], arr[1] }; // array of pointer

									   
	//--->>> arr[0] : ��¥ �迭��
	//-->>> parr[0] : arr[0]�� �ּҸ� ����Ű�� ������.





	//printf("%p\n", parr);
	//printf("%p\n", &parr);

	//printf("%p\n", &parr[0]);		// ADDRESS OF POINTER 
	//printf("%p\n", parr[0]);		
	//
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr);
	//
	//printf("%p\n", arr[0]);
	//printf("%p\n", &arr[0][0]);
	









	///* Array of string(arrayofchar) */

	//// string = "ARRAY" of char
	//// �迭 �̸� = ù ���� �ּ�
	//
	//
	//
	//char* name[] = { "Aladdin","Jasmine","Magic Carpet","Genie" }; // pointer�� �迭 ( A �� ��ġ, J�� ��ġ ...)
	////�� array of pointer


	//const int n = sizeof(name) / sizeof(char*);
	//
	//for (int i = 0; i < n; ++i)
	//	printf("%s at %u\n", name[i], (unsigned)name[i]);	// name[i] = &name[i][0]
	//printf("\n");




	//char aname[][15] = { "Aladdin","Jasmine","Magic Carpet","Genie","Jafar" };
	//
	//const int an = sizeof(aname) / sizeof(char[15]);

	//for (int i = 0; i < 5; ++i)
	//	printf("%s at %u\n", aname[i], (unsigned)aname[i]);	// aname[i] = &aname[i][0]
	//printf("\n");





	//return 0;

}