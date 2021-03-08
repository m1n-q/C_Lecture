#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MONTHS 12	// symbolic constant, macro

int main()
{	
	/* Basic usage */

	int high[MONTHS] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	

	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%d ", high[i]);
	//printf("\n");

	//float avg = 0.0f;
	//for (int i = 0; i < MONTHS; ++i)
	//	avg += high[i];
	//printf("Average = %f\n", avg / (float)MONTHS);




	/* �ϳ��� ����ó�� */
	//high[0] = 1;
	//high[1] = 2;

	
	/* ���� �ÿ��� �߰�ȣ�� �ʱ�ȭ �����մϴ� */
	//high = { 1,2,3,4,5,6,7,8,9,10,11,12 };	  // NOT working
	//high[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };  // NOT working



	

	/* Addresses */

	//printf("%p %p\n", high, &high[0]);			// �迭�� �̸� == ù��° �ּ� ������
	//
	//for (int i = 0; i < MONTHS; ++i)
	//	printf("%lld\n", (long long)&high[i]);	// sizeof(int) �� 4�� Ŀ���� �ּ�
	//printf("\n");

	

	/*  Compiler doesn't check wheter indices are valid  */
	
	//high[12] = 4;		// Runtime Error : compile�� �ȴ�!
	//high[-1] = 123;		// �Ҵ���� ���� �޸𸮿� ����, �ü���� ȥ��
	


	/*  const and array  */
	
	/*const int tmp = 0;
	tmp = 4;*/

	/*const int low[12] = { -7,-5,1,7,13,18,22,22,16,9,2,-5 };
	low[0] = 123;*/


	/* When array is not initialized */

	///*static*/ int not_init[4];		//TODO: try static (storage class)
	//								//static(����) ������ 0���� �ڵ� �ʱ�ȭ?
	//for (int i = 0; i < 4; ++i)
	//	printf("%d\n", not_init[i]);


	/* Partially initialized */

	//int insuff[4] = { 2,4 };
	//for (int i = 0; i < 4; ++i)
	//	printf("%d\n", insuff[i]);


	/* Overlly initialized */
	//int over[2] = { 2,4,8,16 };	// compile error

	
	/* Omitting size */
	//const int pot[] = { 1,2,4,8,16,32,64 };
	//printf("%d\n", sizeof(pot));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(pot[0]));

	//for (int i = 0; i < (sizeof pot / sizeof pot[0]); ++i) // ������ �𸣴ϱ� ��ü / ����
	//	printf("%d ", pot[i]);




	/* Designated initiallizers */
	int days[MONTHS] = { 31,28,[4] = 31,30,31,[1] = 29 }; // [n] �ε��� ����
														  // ������ �ε����� �̾.
	for (int i = 0; i < MONTHS; ++i)
		printf("%d ", days[i]);		// ������ �ȵȰ͵��� 0


	/* Specifying Array sizes */
	// ���� ������ ���� ( 0 �ȵ� )
	
	int arr1[MONTHS];	// Symbolic integer constant
	double arr2[123];	// Literal integer constant
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	//float arr5[-10];
	//float arr6[0];
	//float arr7[1.5];
	float arr8[(int)1.5];




	//int n = 8;
	//float arr9[n];	// Optional; vs X, gcc OK




	return 0;

}