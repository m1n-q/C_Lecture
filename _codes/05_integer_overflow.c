#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <limits.h>
#include <stdlib.h>



int main()
{
	unsigned int j = 0b11111111111111111111111111111111; // �������� ���� �Է�
	unsigned int u = UINT_MAX; // ��ũ��
	unsigned int o = u + 1; // overflow : ���� �ʰ�
	

	int i = INT_MAX; // singed integer



	//printf("%u\n", sizeof(unsigned int));	//	%u : sizeof �Լ��� ��ȯ���� unsinged int
	//printf("%u\n", sizeof(i));	// 4Bytes == 32bits ( ������ 32�� )
	
	
	

	printf("%u\n", j);	// %u : unsigned integer
	printf("%d\n", u);	// %d : signed integer - overflow  


	printf("%d\n", i);	
	printf("%u\n", o);	// overflow ~ 1111 + 1 = 1_0000 ���� ������ �߸�.


	char buffer[33];		// ���� 33���� �޸𸮿� ������ �����ϴ� �迭 ����
	_itoa(u, buffer, 2);	// u �� ��� �ִ� ���ڸ� ������ ���·� (u = 4bytes = 32bits)
							// ��ȯ�� = '����'

	printf("decimal: %u\n", u);
	printf("binary: %s\n", buffer);

	printf("%u", UCHAR_MAX);





	return 0;
}