#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 과세표준 구간

#define BASE1  12000000.0
#define BASE2  46000000.0
#define BASE3  88000000.0
#define BASE4 150000000.0
#define BASE5 300000000.0
#define BASE6 500000000.0


// 세율 

#define RATE1 (6.0 / 100.0)
#define RATE2 (15.0 / 100.0)
#define RATE3 0.24
#define RATE4 0.35
#define RATE5 0.38
#define RATE6 0.40
#define RATE7 0.42

#define BASIC_DEDUCTION 1500000.0


int main()
{	
	double income, tax;



	printf("ENTER YOUR INCOME : ");
	scanf("%lf", &income);
	
	income -= BASIC_DEDUCTION;
	
	
	if (income < 0)
		income = 0;

	
	

	//if (0.0 <= income < BASE1)
	//{
	//
	//	tax = income * RATE1;
	//}
	
	// 머리를 써보세요
	


	if (0.0 <= income && income < BASE1)
	{
		
		tax = income * RATE1;
	}

	

	/* if 로 쓰면 앞에 조건 또 검사해야함 */
	else if ( income < BASE2)
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2;

	else if (income < BASE3)
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2 + (income - BASE2) * RATE3;

	else if (income < BASE4)
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2 + (income - BASE2) * RATE3 + (income - BASE3) * RATE4;

	else if (income < BASE5)
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2 + (income - BASE2) * RATE3 + (income - BASE3) * RATE4 + (income - BASE4) * BASE5;

	else if (income < BASE6)
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2 + (income - BASE2) * RATE3 + (income - BASE3) * RATE4 + (income - BASE4) * RATE5 + (income - BASE5) * RATE6;
	
	else
		tax = BASE1 * RATE1 + (income - BASE1) * RATE2 + (income - BASE2) * RATE3 + (income - BASE3) * RATE4 + (income - BASE4) * RATE5 + (income - BASE5) * RATE6 + (income - BASE6) * RATE7;

	
	// 배열을 이용한 풀이 생각해보기!


	printf("YOUR TAX : \\ %f\n", tax);
	printf("YOUR income after tax : \\ %f", income - tax);



	return 0;

}