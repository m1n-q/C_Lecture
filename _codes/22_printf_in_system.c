#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float n1 = 3.14;	// 4bytes	
	double n2 = 1.234;	// 8bytes
	int n3 = 1024;		// 4bytes


	//printf("%f %f %d\n\n", n1, n2, n3);

	//Note tje warnings in output windows

	printf("%d %d %d\n\n", n1, n2, n3);			// 4, 4, 4	(N, N, N)
	// printf -> float�� stack�� 8bytes double�� ����
	// �޸� ������ �ٸ�. ���� �з��� �� �Է��� n3�� ���� �޶���
	
	
	printf("%lld %lld %d\n\n", n1, n2, n3);		// 8, 8, 4	(N, N, Y)
	// �о���� byte ���� �� ����, ��� Ÿ���� �޶� ���� �ٲ� 
	// (������. ������ ��) �ε��Ҽ��� ó�� ������� ����� ���� ������ ����Ϸ���...

	printf("%f %d %d\n\n", n1, n2, n3);			// 8, 4, 4	(Y, N, N)
	// n2���� �޸� ����� �޶���. �и�

	printf("%f %lld %d\n\n", n1, n2, n3);		// 8, 8, 4	(Y, N, Y)
	// �о���� byte ���� �� ����, ��� Ÿ���� �޶� ���� �ٲ� 
	// (������. ������ ��) �ε��Ҽ��� ó�� ���


	

	return 0;
	
}
