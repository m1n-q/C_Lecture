#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	// exit condition ?

	const int password = 2010;
	int user_input=0;
	
	
	
	printf("Enter secret code : ");		// �� �� ���� �ʿ��� ����? ( ������ �� ���� �Է��� �޾ƾ� �ϴ� ����)
	scanf("%d", &user_input);			// 1. user_input = 0
										// 2. password �ʱ�ȭ. �쿬�� ��ġ

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
	// �񱳸� �ϱ� ���� ������ �ѹ� ����!
	printf("Log in");
	return 0;

}