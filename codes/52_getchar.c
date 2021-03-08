#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>	//	getchar(), putchar()



int main()
{	
	char ch;
	//int ch;

	/* int ASCII */
	// getchar(), putchar() : 한 글자씩 처리하는 함수.
						



/*
	ch = getchar();	// buffer : 임시 저장소에 여러 문자 받아서 저장?
	//putchar(ch);	// 출력

	while (ch != '\n')
	{
		putchar(ch);	// 임시 저장소에서 한글자씩 빼와서?

		ch = getchar();

	}
	
	putchar(ch);
*/

// 좀 더 간결한 코드 ?

	while ((ch = getchar()) != '\n')	// 연산자 우선순위, expression의 value
	{

		// filter
		if (ch == 'f' || ch == 'F')	// else if 대신 or 논리연산자	
			ch = 'X';

		

		//if ('0' <= ch <= '9')
		if (ch >= '0' && ch <= '9') // and 논리연산자
			ch = '*';

		if (ch >= 'a' && ch <= 'z')
			ch -= 32;		// 'a' - 'A'
		else if (ch >= 'A' && ch <= 'Z')
			ch += 32;

		putchar(ch);
		
	}
	
	//putchar(ch);  // 왜? 차이점 찾아내봐 !
	return 0;

}