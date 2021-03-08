#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

int main()
{
	//	% [flags / width / .precision]  length specifier
	// flags : -, +, ' ', #, 0
	// width : num, *
	// precision : .num, .*

	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);		// - flags : ���� ����
	printf("%+i %+i\n", 123, -123); // + flags : ��ȣ ���̱�
	printf("% i\n% i\n", 123, -123);//' 'flags : + �� ��ĭ, -�� ��ȣ

	printf("%X\n", 17);				// 16����
	printf("%#X\n", 17);			// # flags : ����ǥ��(0x ��)
	printf("%05i\n", 123);			// 0 flags : �����ڸ� 0���� ä���
									// 5 width
	
	printf("%*i\n", 7, 456);		// * width : width�� �Ķ���ͷ� (7�� *�ڸ���)



	printf("\nPrecision\n");		// ����
	printf("%.3d\n", 1024);			// ���е� : �ּ� �ڸ���
	printf("%.5d\n", 1024);			// �ּұ��� 0����ä��


	printf("%.3f\n", 123456.1234567);	// �Ǽ� : �Ҽ��� ���� ���е�
	printf("%.3f\n", 123456.1235);		// �ݿø�

	

	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);

	printf("%.*f\n",20, 123.45678f);	// float ��ȿ���� : 6��



	printf("%.5s\n", "ABCDEFGHIJKLMN"); // ���е� : ���� ���� ����
	printf("%.s\n", "ABCDEFGHIJKLMN");	// %.s = %.0s �� �⺻�� 0
	

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	//switch to x64

	sizeof(long long int);
}
