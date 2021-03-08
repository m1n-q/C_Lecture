#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void display(char ch, int rows, int cols);


int main()
{	
	char c;
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);   // scanf의 읽기 방식 : c,d,d 만 읽고 \n은 버퍼에 남아있음.
	//	while (getchar() != '\n');	
	//	display(c, rows, cols);
	//	


	//	if (c == '\n')		// scanf 는 c d d 를 입력받아야 하기 때문에 종료시에도 \n d d 로 입력해야함.
	//		break;			
	//}
	

	

	while ((c = getchar()) != '\n')			// 문자만 따로 받아서, 종료조건 \n 도 따로 받을 수 있게!
	{
		scanf("%d %d", &rows, &cols);
		
		display(c, rows, cols);
		//while ((getchar()) != '\n');
		printf("Press enter to quit\n");
	}

	//return 0;
}


void display(char ch, int rows, int cols)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	
}