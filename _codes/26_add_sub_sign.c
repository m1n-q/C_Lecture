#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int income, salary, bonus;
	
	income = salary = bonus = 100; // triple asignment

	salary = 100;
	bonus = 30;

	income = salary + bonus; // L-Value vs R-Value
							 // s + b 의 값이 임시로 저장되는 것은 R-Value

	int takehome, tax;
	tax = 20;
	takehome = income - tax; // 이항 연산자


	int a, b;
	a = -7;	// - : 부호 '연산자' (단항 연산자)
	b = -a;
	b = +a;	// + does nothing

	1.0f + 2; // == float!
}
