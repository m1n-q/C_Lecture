#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	/* 
		+=, -=, *=, %=/
		
		precedence : = ���Կ����ڿ� ����
					 ���� ���� !

	*/

	/*
		
		������� Ȯ�� : Debug - Windows - Disassembly
					     Break point - Debug mode - right button - go to disassembly
	
	
	*/



	int i = 1024;

	

	i = i + 10;
	i += 10;

// ����? 1. �ð� �纸��
//		 2. ����� �ڵ� Ȯ��


	i %= 4;
	

	i* (1 + 2);


	i *= 1 + 2;
	i *= (1 + 2); // ���ϱ⺸�� �켱���� ���� ������ ���� �ʿ����

	for (int i = 0; i < 10; i += 1)
		;
	







	return 0;

}