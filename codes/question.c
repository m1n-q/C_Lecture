#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void printa();
int main()
{	

	



	/* scanf , printf , char , int */


	//int c;
	//char d;
	//scanf("%c %c", &c, &d);
	//printf("%d %d", c, d);


	//printf("sum = %d",sum);



	
	//scanf("%d", &c);	

	//scanf("%c %c", &c, &d);	
	//printf("\n");
	//printf("%hhd\n", c);
	//printf("%d %d\n", c, d);


	//printf("%d", 'A');
	

	// A : int  : 4 byte (00  *  4ĭ)
	//	   char : 1 byte (00  *  1ĭ)
	//	   int�� A �Է�  : ���ڱ� ������ 1ĭ�� ����. cc cc cc 41
	//	   int�� 65 �Է� : ������ ������ 4ĭ �� ���. 00 00 00 41

	// printf ����, %d�� ��� : 4ĭ �о��! char �� ����ص� 4ĭ �о���ϱ�, �̻��� ���鵵 ����?
	
	//							�� �ƴϰ�... �ش� ������ 10���� ������ �����!
	//							���� ���� 10���� ������ ���.
	//							char�� 1byte �����̴ϱ� �� 1byte�� �о�� 10���� ������ ����ϴ� �� ��. 
	
	
	//int c;
	//scanf("%c", &c);
	//printf("%hhd", c);

	
	




	/* buffer :  �� \n ���� ��µǳ���? */
	
	//char ch;
	//
	//while ((ch = getchar()) != '.')
	//{
	//	
	//	putchar(ch);
	//	
	//}
	//

	//return 0;


	// A : ���͸� ġ�� ���� �Է¹��ۿ� ����!
	//     ex ) Hello enter
	//			H, e, l, l, o, \n �� ���ʷ� getchar�� ����, putchar�� ���
	//			Hello\n ��� ��, �Է� ���۰� ������� getchar��

	// scanf�� getchar�� �� �Է� ���ۿ��� ���� �����ͼ� �����ϰų� �����ϴ°� ���Դϴ�
	// scanf�� 2�� ������ �ܼ�â �Է��� 2�� �޾ƾ��Ѵٰ� �����ϱ� ������,

	//	���� ���� ù���� scanf���� asd asds �̷��� �Է��ϰ� ���͸� �ƴ��� �� ���� scanf���� �ܼ� �Է��� Ȱ��ȭ ���� ���� ä �ٷ� b�� s�� �Էµ� ���� Ȯ���� �� �ֽ��ϴ�.

	// �Է� ���ۿ� a s d ���� a s d s \n  �̷��� �� �ֱ� ������ ù��° scanf�� �ι��� scanf���� �տ� �ִ� a�� s�� ���ͼ� �����߱� �����Դϴ�.�Է� ���ۿ��� ���� ���� �ֱ� ������ ���� �� ��° scanf���� �ܼ� �Է��� Ȱ��ȭ ���� �ʾҴ� ������.


	
	//char ch;
	//int a, b;
	//scanf("%d %d", &a, &b);
	//printf("%d %d\n",a, b);
	//
	//while ((ch = getchar()) != '\n')
	//{
	//	putchar(ch);
	//	
	//}




	//printa();
	//printa();
	//printa();
	//printa();
	//printa();
	//printa();
	//printf("%d", b);
}
void printa()
{
	int a = 0;
	static int b = 0;
	a += 1;
	b += 1;

	printf("a = %d, b = %d\n", a, b);

}