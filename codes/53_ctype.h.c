#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>	// isalpha(), toupper() and more



int main()
{	
	char ch;

	while ((ch = getchar()) != '\n')	// ������ �켱����, expression�� value
	{


		/*if (ch >= 'a' && ch <= 'z')
			ch -= 'a' - 'A';
		
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';*/

		if (islower(ch))			// int islower(int c) : parameter�� �ڵ�����ȯ 
			ch = toupper(ch);		//                      int�� �Է�, 0,1 ��ȯ

		else if (isupper(ch))
			ch = tolower(ch);

		

		if (isdigit(ch))			// != 0
			ch = '*';

		putchar(ch);
	}


	return 0;

	// �޸� �����ڴ� or �� �ƴϰ� and�� �ƴմϴ�. 
	// if (A, B) ��� �ϽŴٸ� A �� ������ �Ǳ� �ϵ� if ���ǹ��� B �� ����մϴ�.
}