#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	printf("RAMENing \n");

	/* ��� redirection 
		
		file �� ����ϵ���?
		1. cmd - working directory 
		2. 66_redirection > output.txt
		�ܼ�â���� ��µ� ����� ������ redirection �Ѱ�!

		66_redirection >> output.txt
	*/





	char str[100];
	scanf("%s", str);
	printf("I love %s\n", str);


	/* �Է� redirection

		file ���� ���ϵ���?
		1. cmd - working directory
		2. 66_redirection < intput.txt 
		�ܼ�â���� ��µ� ����� ������ redirection �Ѱ�!
	
		66_redirection < intput.txt > output.txt 
	
	
	*/


	/* file to file
	
		1. copy 66_redirection.exe test.exe ( ��±�� test.exe )
		2. test.exe | 66_redirection.exe
			test.exe�� ��� ����� | (pipe)�� Ÿ�� stream!
		
		�̷��� �������� stream���� ���� ��Ÿ���� EOF
	
	*/
	
	return 0;

}