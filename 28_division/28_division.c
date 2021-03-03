#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	printf("Integer divisions\n");	// ���� ��� : truncation (�ݿø� x)
	printf("%d\n", 14 / 7);
	printf("%d\n", 7 / 2);	// 3.5
	printf("%d\n", 7 / 3);	// 2.33
	printf("%d\n", 7 / 4);	// 1.75
	printf("%d\n", 8 / 4);	// 2 


	printf("Truncating toward zero (C99)\n"); // ������ ��� 0�� ����� ������
	printf("%d\n", -7 / 2);	// -3.5
	printf("%d\n", -7 / 3);	// -2.33
	printf("%d\n", -7 / 4);	// -1.75
	printf("%d\n", -8 / 4);	// -2

	printf("\nFloating divisions\n");
	printf("%f\n", -9.0 / 4.0);
	printf("%f\n", -9.0 / 4);	// �ڷ��� �ٸ� �ͳ��� ���� �Ұ�
								// �����Ϸ��� double�� �ٲپ ����



	// division, casting : truncation
	// �� ��ü�� ���� �� �����ϱ�

	// float precision format specifier�� round-off
	// ���� ����Ƽ� �߸��°� �ƴ϶� �߶� ǥ���ϴ� ���̴ϱ�!
	
}
