#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

	///* promotion i assignment */
	//// promotion : ���� ���� ū �ڷ����� ����, ���� x
	//
	//short s = 64;
	//int i = s;

	//float f = 3.14f;
	//double d = f;

	///* demotion in assginments */
	//// demotion : ������ ����� ū �ڷ����� ���� ������ ����
	//
	//d = 1.25;
	//f = 1.25;		// 2�� ����� ���е� ǥ��
	//f = 1.123;

	///* Ranking */

	//// �Ǽ� > ����
	//// �޸𸮼�

	//// long double > double > float
	//// unsigned long long, long long
	//// unsigned long, long
	//// unsigned, int
	//// unsigned short, short
	//// unsigned char, char
	//// _Bool

	//d = f + 1.234;	// ���� �ٸ� �ڷ��� ��� �Ұ�. double�� ��ȯ �� ����	
	//f = f + 1.234;	// expression �� ���� double : WARNING
	//

	///* automatic promotion of function arguments */
	//// 1. Functions w/o prototypes
	//// 2. Variadic functions (ellipsis)

	///* castic operators */
	//d = (double)3.14f;
	//i = 1.6 + 1.7;				// int i, truncation 3.3 = 3
	//printf("i = %d\n", i);
	//i = (int)1.6 + (int)1.7;	// truncation 1.6, 1.7 : 1 + 1 = 2
	//printf("i = %d\n", i);



	// division, casting : truncation
	// float precision format specifier�� round-off




	/* more examples */


	char c;		     // char �� ���������� �����̴�.
	int i;
	float f;
	f = i = c = 'A'; // 65
					 // int �� float ��ȿ���� ���� �ٸ� . WARNING

	printf("%c %d %f\n", c, i, f);

	c += 2;			// 'C', 67
	i = f + 2 * c;	// 2 * c �� float���� ��ȯ �� ���
					// ���� float ���� int i �� ����. WARNING

	printf("%c %d %f\n", c, i, f);


	c = 1106;			// demolition, 
						// 1106 = 0b10001010010
	printf("%c\n", c);	// 0b01010010 = 1106 % 256 = 82 = 'R'


}
