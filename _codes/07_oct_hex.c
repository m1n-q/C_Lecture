#include <stdio.h>

int main()
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;	//32
	unsigned int oct = 037777777777;
	unsigned int hex = 0xffffffff;	//8
	// ���콺�� �÷����� �� ���� ���� ��Ÿ���� �� �� �ִ�.



	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);
	// �� ������ ���ͷ��� �̿��Ͽ� ǥ��������, 10������ ǥ���ϸ� ���� ���ڴ�.

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
	// 10������ 8����, 16������
	// # : prefix ~ ���� ǥ�� 

	return 0;
}