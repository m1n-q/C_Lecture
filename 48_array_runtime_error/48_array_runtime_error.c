#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM_DAYS 365 // ��ũ��
					 // �������ϱ� ���� ����
					 // Array size�� define �ϴ� ��쵵 ���� !


int main()
{	

	/* 
		���� �������� ������ ��� 
		����Ǿ� �ִ� �޸𸮸� �����!
	*/

	//char my_chars[] = "Hello, World";

	//int daily_temperature[NUM_DAYS];
	//double stock_prices_history[NUM_DAYS];

	//printf("%zd\n", sizeof(stock_prices_history));
	//printf("%zd\n", sizeof(double) * NUM_DAYS);
	//printf("%zd\n", sizeof(stock_prices_history[0]));

	
	
	int my_numbers[5];

	//					// index 
	//my_numbers[0] = 1;	// offsets : ù �޸� �ּҷκ��� �󸶳� ������ �ֳ�?
	//my_numbers[1] = 3;
	//my_numbers[2] = 4;
	//my_numbers[3] = 2;
	//my_numbers[4] = 1024;

	//// scanf("%d", &my_numbers[0]); // [] �� & ���� �켱���� ����. 
	//							 // &(my_numbers[0]) �� ����.
	//							 // & : �ּҸ� �Ѱܶ�.

	//// scanf("%d", my_numbers);	 // [0] �� ����.
	//							 // �迭���� ��ü������ �ּ�.
	//							 // ���������� �Ҵ�� �޸� ������ ù��° �ּҸ� ��Ÿ��



	//printf("%d\n", my_numbers[0]);
	//printf("%d\n", my_numbers[1]);
	//printf("%d\n", my_numbers[2]);
	//printf("%d\n", my_numbers[3]);
	//printf("%d\n", my_numbers[4]);




	/* Runtime Error */

	//my_numbers[5] = 123;	// out of bound (6��° ����. �Ҵ� x)
							// compile error ����	( compile time : �������� ��Ƴ� )
							// ����� runtime error ( run time : �������� ����. ����� �߰� )


	//my_numbers = 7;			// compile error
							// �迭�� : ù �ּ��� ����.
							// �ּҿ� �ٷ� ���� ? ����

	//printf("%d\n", my_numbers[5])	// out of bound



	return 0;

}