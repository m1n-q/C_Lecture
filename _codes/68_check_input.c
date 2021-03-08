#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>

long get_long();

int main()
{	
	/*long num1 = get_long();
	long num2 = get_long();*/
	int n1 = INT_MAX;
	
	int n2 = n1;
	long long n3 = 64424509441;
	scanf("%lld %ld", &n3, &n2);
	printf("%d %d",n3, n2);

}

long get_long()
{
	printf("Please input an integer and press ENTER.\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		while ((c = getchar()) != '\n')		// 버퍼를 비우면서 동시에 출력.
			putchar(c);

		printf(" - is not an integer. Please try again.\n");
	}

	printf("Your input %ld is an integer. THANK YOU.\n", input);

	return input;
}