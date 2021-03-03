#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // exit()


int main()
{	
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";	// exe 로 실행 : exe와 같은 위치.
										// VS로 실행   : project와 같은 위치.

	file = fopen(file_name, "r");		// fopen : 파일과의 stream, 통로를 열어달라!
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1);			// exited with code #
							// 치명적인 오류 -> 프로그램 자체를 강제종료시키는 함수!
	}

	while ((c = getc(file)) != EOF)		// file stream으로 부터 문자를 읽어들임
		putchar(c);

	fclose(file);					// 스트림 닫기! 운영체제가 알게!
									// 다른 프로그램이 파일에 접근하고 싶을 수 도 있으니까!


	return 0;				// exited with code 0

}