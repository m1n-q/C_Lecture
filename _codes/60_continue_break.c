#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{

	/* continue */
	//for (int i = 0; i < 10; ++i)	// for loop�� ���� : ������ ������ -> ������> ���ǽ�
	//{								// continue ������, �غκ� ������ϰ� (������ ��ó��), ����������.
	//	if (i == 5)
	//		continue;
	//	
	//	printf("%d ", i);
	//}

	/* break */
	//for (int i = 0; i < 10; ++i)	// break�� ������ ù��° ���� Ż�� : ��, ���߿���!
	//{								
	//	if (i == 5)
	//		break;

	//	printf("%d ", i);
	//}

	/* while and continue */
	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//	count++;
	//}


	/* continue as a PLACEHOLDER */

	//while (getchar() != '\n')
	//	continue;			// �ϴ� �� ������ �ڸ��� ����.
	//						// ������ �� �� �ִٴ� ����
	//						// null statement ; �� ������ �� �Ⱥ��̴ϱ�.
	//						// �ּ� ��� ��





	/* Need to use continue ? */
	
	//char c;
	//while ((c = getchar()) != '\n')
	//{
	//	// ���ӽ�, ���� ����! ����� ����.

	//	if (c == 'a')
	//		continue;
	//	putchar(c);


	//	if (c != 'a')
	//		putchar(c);

	//}




	/* break */

	/*while ((c = getchar()) != '.')
	{
		putchar(c);
	}

	while(1)	// �� �� ���� ���� ����!
	{
		char c = getchar();
		if (c == '.')
			break;
		putchar(c);
	}*/


	for (int i = 0; i < 10; ++i)		// ���� �ϳ��� ���� ����
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == 5)
				break;
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
		
		

	return 0;

}