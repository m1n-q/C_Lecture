#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // exit()


int main()
{	
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";	// exe �� ���� : exe�� ���� ��ġ.
										// VS�� ����   : project�� ���� ��ġ.

	file = fopen(file_name, "r");		// fopen : ���ϰ��� stream, ��θ� ����޶�!
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1);			// exited with code #
							// ġ������ ���� -> ���α׷� ��ü�� ���������Ű�� �Լ�!
	}

	while ((c = getc(file)) != EOF)		// file stream���� ���� ���ڸ� �о����
		putchar(c);

	fclose(file);					// ��Ʈ�� �ݱ�! �ü���� �˰�!
									// �ٸ� ���α׷��� ���Ͽ� �����ϰ� ���� �� �� �����ϱ�!


	return 0;				// exited with code 0

}