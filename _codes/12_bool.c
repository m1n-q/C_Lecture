#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%u\n", sizeof(_Bool));	// 1 byte
									// 0,1 �̱� ������ 1bit����
									// �ڷ����� �ּҸ� �������� �� �ִ� �ּ� ũ��
					

	_Bool b1;
	b1 = 0;		// false
	b1 = 1;		// true


	printf("%d\n", b1);				// ���� ���� �����ڰ� ����.


	bool b2, b3;
	b2 = true;
	b3 = false;
	
	printf("%d %d\n", b2, b3);		// true , false �Ǻ� - NOT false = true
}