#include <stdio.h>
//#include <stdint.h> in inttypes.h
#include <inttypes.h>

int main()
{
	int i;				// int : ȯ�濡 ���� 2 or 4 bytes

	// type define ����
	// �����ʺ� ����
	int32_t i32;		// 32 bit integer


	int_least8_t i8;	// at least 8 bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integer
	uintmax_t uimax;	// biggest unsigned integer


	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);		// �� �������� �ɰ� �� ����
	printf("me32 = %" PRId32 "\n", i32);	// ��ũ��(inttypes.h)	
											// �����ʺ� �������� �´� ���������ڰ�
											// �������� �� ��		
											// PRINT 32��Ʈ ���� ��� ��

	return 0;
}