#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int income, salary, bonus;
	
	income = salary = bonus = 100; // triple asignment

	salary = 100;
	bonus = 30;

	income = salary + bonus; // L-Value vs R-Value
							 // s + b �� ���� �ӽ÷� ����Ǵ� ���� R-Value

	int takehome, tax;
	tax = 20;
	takehome = income - tax; // ���� ������


	int a, b;
	a = -7;	// - : ��ȣ '������' (���� ������)
	b = -a;
	b = +a;	// + does nothing

	1.0f + 2; // == float!
}
