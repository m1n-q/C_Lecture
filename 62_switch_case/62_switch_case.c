#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	char c;
	while ((c = getchar()) != '.')
	{
		printf("You Love ");

		switch (c)	// Note : integer type only
		// switch(tolower(c))
		{
		case 'a' :	
		// case 'A'
			printf("apple");
			break;		// 'a' ��ġ���� ����, ������ ��!
		case 'b' :
		printf("banana");
			//break;
		case 'c' :
			printf("coffee");
			//break;
		default :
			printf("NOTHING");
			

		}

		printf("!\n");

		while ((c = getchar()) != '\n');
	}


	return 0;

}