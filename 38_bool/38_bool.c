#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>	//  bool,  true, false



int main()
{
	//int i;
	//i = 5;
	//i == 5;
	//5 = i;	// error
	//5 == i;


	//while (i = 5)  { /* do sth*/ }	// expression �� = 5 = true, i�� 5 ����
	//while (i == 5) { /* do sth*/ }	// expression �� = 0 or 1

	_Bool boolean_true = (2 > 1);
	_Bool boolean_false = (1 > 2);


	// �ᱹ ���������δ� ���������� ó��.
	// format specifier�� ���� ����.
	
	printf("True is %d\n", boolean_true);
	printf("False is %d\n", boolean_false);


	/* ���׿����� */

	printf(boolean_true ? "true" : "false");
	printf("\n");
	printf(boolean_false ? "true" : "false");


	/* define : �ܼ� ��ü */
	bool bt = true;
	bool bf = false;




}
