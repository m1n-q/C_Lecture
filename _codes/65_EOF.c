#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>


int main()
{	
	int c;	

	
	// getchar() �� ��ȯ���� signed int��, 
	// �ƽ�Ű�� 1~127... ������ ���µ� ���� signed�� ����ϴ� ������?



	// �Է��� ���� �ü���� �˷���!
	// �� �� getchar�� -1 ����!

	// Ctrl + z �� EOF !
	// Ctrl + c �� ��������



	while ((c = getchar()) != EOF)	// End Of File
		putchar(c);


	//	stream : �����Ͱ� �귯 ���� �� ?
	//			 ���� ����� stream�� ���� EOF�� ?
	//while (1)
	//{
	//	c = getchar();
	//	printf("%c = %d\n",c, c);
	//	if (c == EOF)
	//		break;

	//}

	return 0;

}