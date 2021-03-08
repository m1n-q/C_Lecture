#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



int main()
{	

	
	char c;
	int input;

	printf("MENU\n");
	printf("a. avengers        b. beep\n");
	printf("c. count           q. quit\n");
	printf("\n");
	printf("Enter the letter of your choice : ");
	printf("\n");

	while ((c = getchar()) != 'q')

	{	
		

		switch (c)
		{
		case 'a':
			printf("AVENGERS ASSEMBLE!\n\n");
			break;
		case 'b':
			printf("\a\n");
			break;
		case 'c':

			printf("Enter a number : ");

			if (scanf("%d", &input) == 1)
			{
				for (int i = 1; i <= input; i++)
					printf("%d\n", i);
				printf("\n");
			}
			else
			{
				printf("Your input isn't number. Back to Menu.\n\n");
						
			}
			break;

		default:
			printf("Wrong Input. Try again.\n\n");
			//exit(1);			// 강의 참고. 처음부터 a,b,q 검증을 하고, 여기로 내려오는건 있으면 안되는 상황
		}
		
		while (getchar() != '\n');

		printf("MENU\n");
		printf("a. avengers        b. beep\n");
		printf("c. count           q. quit\n");
		printf("\n");
		printf("Enter the letter of your choice : ");	
		printf("\n");
	}


	return 0;

}