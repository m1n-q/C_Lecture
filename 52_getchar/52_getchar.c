#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>	//	getchar(), putchar()



int main()
{	
	char ch;
	//int ch;

	/* int ASCII */
	// getchar(), putchar() : �� ���ھ� ó���ϴ� �Լ�.
						



/*
	ch = getchar();	// buffer : �ӽ� ����ҿ� ���� ���� �޾Ƽ� ����?
	//putchar(ch);	// ���

	while (ch != '\n')
	{
		putchar(ch);	// �ӽ� ����ҿ��� �ѱ��ھ� ���ͼ�?

		ch = getchar();

	}
	
	putchar(ch);
*/

// �� �� ������ �ڵ� ?

	while ((ch = getchar()) != '\n')	// ������ �켱����, expression�� value
	{

		// filter
		if (ch == 'f' || ch == 'F')	// else if ��� or ��������	
			ch = 'X';

		

		//if ('0' <= ch <= '9')
		if (ch >= '0' && ch <= '9') // and ��������
			ch = '*';

		if (ch >= 'a' && ch <= 'z')
			ch -= 32;		// 'a' - 'A'
		else if (ch >= 'A' && ch <= 'Z')
			ch += 32;

		putchar(ch);
		
	}
	
	//putchar(ch);  // ��? ������ ã�Ƴ��� !
	return 0;

}