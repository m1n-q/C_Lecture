#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	int num;
	scanf("%d", &num);

	if (num == 1)
		printf("One");
	else if (num == 2)		// �׷��� �ʰ� 2���?
		printf("Two");
	else if (num == 3)		// �׷��� �ʰ� 3�̶��?
		printf("Three");
							
	
	
	// �� �����ǿ��� false ����
	// ��� !=1 ����,
	// �����ٺ��� !=1 , !=2 ���� ....


	

	 
	 
	/* ������ ���� ������ ! */
	/* else if : �� ���ǰ� ���� nested ���� */

	if (num == 1)
		printf("One");

	else					// �׷��� �ʰ�
		if (num == 2)		// 2���?
			printf("Two");

		else				// �׷��� �ʰ�
			if (num == 3)	// 3�̶��?
				printf("Three");




	/*if (num == 1)
		printf("1ST IF\n");
	else if (num == 1)		
		printf("2ND IF\n");
	else if (num == 1)		
		printf("3RD IF\n");



	if (num == 1)
		printf("1ST IF\n");
	if (num == 1)		
		printf("2ND IF\n");
	if (num == 1)		
		printf("3RD IF\n");*/


	if (num > 5)
		if (num < 10)
			printf(" 5 < %d < 10\n", num);

	else
		printf(" %d <= 5\n", num);

	// Compiler IGNORE INDENTING
	// ���� ����� if�� ¦����.



	// {}


	return 0;

}