#include <stdio.h>



int main()
{
	char c = 'A';	// CHAR = -128 ~ 127
	char d = 65;	// %c 로 출력했을때, 대응되는 ASCII 코드 적용
	

	//printf("char c : " "%%c = %c, %%hhd = %hhd\n", c, c);
	//printf("char d : " "%%c = %c, %%hhd = %hhd\n", d, d);

	//printf("%c \n", c + 1);


	

	//printf("%c\n", 7);	// 숫자 7을 char 로 출력했을 때 : ASCII 7
	//printf("%c\n", '7');	// 문자 7을 char 로 출력했을 때


	//printf("%d\n", 7);	// 숫자 7을 int 로 출력했을 때
	//printf("%d\n", '7');	// 문자 7을 int 로 출력했을 때 : '7' 의 ASCII
	
	
	//printf("7\n");		// 문자 7
	//printf("\7\n");		// 숫자 7 : ASCII 7
	
						
	//printf("\07\n");	// 8진수 표현
	//printf("\a");		// 문자 a가 아닌 기능
	

	//float pay;
	////printf("$______");
	//printf("$______\b\b\b\b\b\b");	// \b : 출력을 한 뒤 커서 backspace
	//scanf("%f", &pay);
	//	
	return 0;

}