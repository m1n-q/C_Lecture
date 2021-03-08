#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main()
{	
	double year2018[MONTHS] = { -1.3, -4.0, -0.2, 15.6, 20.4, 23.8, 21.9, 33.6, 25.5, 15.4, 8.4, 5.5 };
	double year2019[MONTHS] = { -5.0, -2.1, 6.6, 5.5, 16.4, 18.9, 23.9, 26.3, 23.7, 23.1, 14.9, 4.6 };
	double year2020[MONTHS] = { -2.2, 2.6, 5.8, 11.3, 20.2, 19.7, 21.1, 25.3, 26.6, 18.8, 13.7, 1.1 };

	/*
	1. Use 2D array
	2. Print data
	3. Calculate and print yearly average of 3 years
	4. Calculate and print monthly average for 3 years
	*/


	// Step 1.


	double table[YEARS][MONTHS]; // 3
	for (int i = 0; i < YEARS; ++i)
	{

		for (int j = 0; j < MONTHS; ++j)
		{
			if (i == 0)
				table[i][j] = year2018[j];
			else if (i==1)
				table[i][j] = year2019[j];
			else
				table[i][j] = year2020[j];
		}
	}
	

	// Step 2.

	printf("[Temperature Data]\n");
	
	printf("Year \\ Month  ");
	for (int i = 1; i <= 12; ++i)
		printf("\t%5d", i);
	printf("\n");


	for (int i = 0; i < YEARS; ++i)
	{
		printf("Year %d  ", i);
		for (int j = 0; j < MONTHS; ++j)
		{
			printf("\t%5.1f", table[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	// Step 3.

	
	printf("[Yearly average]\n");
	for (int i = 0; i < YEARS; ++i)
	{
		double avg = 0;

		for (int j = 0; j < MONTHS; ++j)
			avg += table[i][j];
		
		printf("Year %d  %f\n", i, avg / MONTHS);
	}
	printf("\n");





	// Step 4.

	printf("[Monthly average]\n");
	printf("\tMonth  ");
	for (int i = 1; i <= 12; ++i)
		printf("\t%5d", i);
	printf("\n     Avg Temp ");
	
	

	for (int i = 0; i < MONTHS; ++i)
	{
		double avg = 0;
		
		for (int j = 0; j < YEARS; ++j)
		{
			avg += table[j][i];
		}
		printf("\t%5.1f", avg / YEARS);
		
	}
	printf("\n");

	
	
	


	return 0;

}