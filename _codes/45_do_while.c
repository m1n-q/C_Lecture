#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	// exit condition ?

	const int password = 2010;
	int user_input=0;
	
	
	
	printf("Enter secret code : ");		// 이 두 줄이 필요한 이유? ( 무조건 한 번은 입력을 받아야 하는 이유)
	scanf("%d", &user_input);			// 1. user_input = 0
										// 2. password 초기화. 우연의 일치

	while (user_input != password);
	{
		printf("Enter secret code : ");
		scanf("%d", &user_input);
	}
	
	
	/*do								
	{
		printf("Enter secret code : ");
		scanf("%d", &user_input);
	} while (user_input != password);*/
	// 비교를 하기 전에 무조건 한번 실행!
	printf("Log in");
	return 0;

}