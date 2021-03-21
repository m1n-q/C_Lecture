#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>


int main()
{	
	int c;	

	
	// getchar() 의 반환값이 signed int형, 
	// 아스키는 1~127... 음수가 없는데 굳이 signed를 사용하는 이유는?



	// 입력의 끝은 운영체제가 알려줌!
	// 이 때 getchar가 -1 리턴!

	// Ctrl + z 로 EOF !
	// Ctrl + c 로 강제종료



	while ((c = getchar()) != EOF)	// End Of File
		putchar(c);


	//	stream : 데이터가 흘러 들어가는 것 ?
	//			 파일 입출력 stream의 끝도 EOF로 ?
	//while (1)
	//{
	//	c = getchar();
	//	printf("%c = %d\n",c, c);
	//	if (c == EOF)
	//		break;

	//}

	return 0;

}