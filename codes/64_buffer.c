#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h> //Windows, _getch(), _getche()


int main()
{	

	char c;

	while ((c = getchar()) != '.')		// 한글자씩 get, put 하는 것이 아님!
	{								    // 1. getchar가 콘솔 입력 받음.
		putchar(c);						//	  한글자씩 바로바로 리턴 하는 것이 아니야!
	//	printf(" ");					//	  입력할 때 마다 버퍼에 저장
	}
										// 2. 때가 되면, 버퍼에 담긴 내용을 통째로 전달.
										//    때가 언제 ? 1. 버퍼가 가득 참, 2. '\n' 만나면.
	
										// 3. scanf 나 getchar는 입력을 받는 놈들이 아님!
										// 입력 버퍼에서 값을 가져와서 저장하거나 리턴할 뿐!
										// 따라서 입력 버퍼에 값이 있으면 콘솔 입력을 새로 받지 않고
										// 가져와서 리턴. 버퍼가 비었을 때 콘솔 입력 다시 활성화.
		
	//while ((c = _getche()) != '.')	// 버퍼를 사용하지 않는 경우! (echo)
	//	putchar(c);						

	return 0;

}


