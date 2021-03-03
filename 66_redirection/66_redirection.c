#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	printf("RAMENing \n");

	/* 출력 redirection 
		
		file 에 출력하도록?
		1. cmd - working directory 
		2. 66_redirection > output.txt
		콘솔창으로 출력될 출력의 방향을 redirection 한것!

		66_redirection >> output.txt
	*/





	char str[100];
	scanf("%s", str);
	printf("I love %s\n", str);


	/* 입력 redirection

		file 에서 입하도록?
		1. cmd - working directory
		2. 66_redirection < intput.txt 
		콘솔창으로 출력될 출력의 방향을 redirection 한것!
	
		66_redirection < intput.txt > output.txt 
	
	
	*/


	/* file to file
	
		1. copy 66_redirection.exe test.exe ( 출력기능 test.exe )
		2. test.exe | 66_redirection.exe
			test.exe의 출력 결과가 | (pipe)를 타고 stream!
		
		이러한 데이터의 stream에서 끝을 나타낼때 EOF
	
	*/
	
	return 0;

}