#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void display(char ch, int rows, int cols);


int main()
{	
	char c;
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);   // scanf�� �б� ��� : c,d,d �� �а� \n�� ���ۿ� ��������.
	//	while (getchar() != '\n');	
	//	display(c, rows, cols);
	//	


	//	if (c == '\n')		// scanf �� c d d �� �Է¹޾ƾ� �ϱ� ������ ����ÿ��� \n d d �� �Է��ؾ���.
	//		break;			
	//}
	

	

	while ((c = getchar()) != '\n')			// ���ڸ� ���� �޾Ƽ�, �������� \n �� ���� ���� �� �ְ�!
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