#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
		printf("%d %d\n", n, nsqr);




	// comma operator
	// for (n, nsqr ���� �� �ʱ�ȭ ; ; 1 expression -> 2 subexpression)
	// int n = 1, double d = 1.0; �� �ȵ� 
	// update �� : 1 expression -> 2 subexpression - 2���� ��� ����

	// printf�� commas : not comma operator, but seperator. �ܼ� ����.



	int i, j;
	i = 1;
	i++, j = i;		// comma = sequence point
					// sequence point �� ������ ���� expression�� ��Ȯ�ϰ� ���� ����
					// ���� �����ڰ� ����� �ȴ�.
	printf("%d %d\n", i, j);
	

	int x, y, z;
	z = x = 1, y = 2; // = : right to left
					  // , : ����!
					  // x = 1 ( �� ��ü �� 1 ) -> z = 1 -> y = 2 ( comma ���� -> ������ )

	
	printf("x=%d, y=%d, z=%d\n", x, y, z);

	z = ((x = 1), (y = 2));	// x = 1 -> y = 2 -> ��ȣ �� expression �� = 2 ( , ���� �������� ��ü expressiond�� ���� �ȴ�. )
	printf("x=%d, y=%d, z=%d\n", x, y, z);

	// int my_money = 123, 456; // error
	int my_money = (123, 456); 
	printf("%d\n", my_money);


	return 0;
}