#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int start, target, years;
	float interest, going;
	printf("Input money : ");
	scanf("%d", &start);
	printf("Input target money : ");
	scanf("%d", &target);
	printf("Input interest(%%) : ");
	scanf("%float", &interest);


	years = 0;
	going = start;
	while (going <= target)
	{	
		years++;
		
		going = going * (1.0f + interest / 100.0f);
		printf("%f\n", going);
	}

	printf("It takes %d years!", years);
}
