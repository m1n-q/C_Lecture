#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("EVEN");

	else
		printf("ODD");


	return 0;
	
	// �޸� �����ڴ� or �� �ƴϰ� and�� �ƴմϴ�. 
	// if (A, B) ��� �ϽŴٸ� A �� ������ �Ǳ� �ϵ� if ���ǹ��� B �� ����մϴ�.
	
}