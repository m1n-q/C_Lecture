#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int a = 0;
	//
	//
	//a++;
	//printf("%d\n", a);

	//++a;
	//printf("%d\n", a);

	//double b = 0;

	//b++;
	//printf("%f\n", b);

	//++b;
	//printf("%f\n", b);


	//int count = 0;

	//// ++count : ���� ������Ų �� ���
	//// count++ : ���� ����� �� ����
	//
	//while (count < 10)			// ++count , count++
	//{

	//	printf("%d ", ++count);
	//	
	//	//++count : count �� ���� �� printf�� ����
	//	

	//	//count++ : printf �� count �� ���� �� ����
	//	

	//}


	//int i = 3;
	//int j = 2 * --i;		// i ���� �� ����
	//printf("i = %d, j = %d\n", i, j);

	//i = 3;
	//j = 2 * i--;			// i ���� �� ����
	//printf("i = %d, j = %d\n", i, j);


	/* very high precedence */

	//int x, y, z;

	//x = 3, y = 4;
	//z = (x + y++) * 5;			// (x + y)++ or x + (y++) ? ����!!
	//							// �켱������ ���� �� �´µ�,
	//							// ���������ڱ� ������ ��� �ڿ� ����.
	//							// 3 + 4 �� ���� 4++
	//printf("x = %d y = %d z = %d", x, y, z);



	/* ++ & -- for modifiable LValues */

	//int x = 1, y = 1, z;
	//z = x * y++;	// x * (y++)
	//
	//z = (x * y)++;	// (x*y) : RValue, �޸� ���� ���� �ӽ� ��
	//					// ++ ���� �Ұ�.
	//
	//z = 3++;			// ���ͷ� : RValue


	///* Bad practices */

	//// �� ���忡 ������ ȣ��Ǹ� ����

	//int n = 1;
	//printf("%d %d", n, n * n++);	// ������ ���Ǹ�, �ý��۸��� �ٸ��� ���� �� ����.
	//int x = n / 2 + 5 * (1 + n++);
	//int y = n++ + n++;

	





}


