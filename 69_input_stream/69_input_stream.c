#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	

	char str[255];
	int i, i2;
	double lf;


	// input : hello 123 3.14

	scanf("%s %d %lf", str, &i, &lf);
	printf("%s %d %f\n", str, i, lf);


	scanf("%s %d %d", str, &i, &i2);
	printf("%s %d %d\n", str, i, i2);

	char c;
	printf("���� �� : ");
	while ((c = getchar()) != '\n')
	{
		putchar(c);
	}
	

	// �ܼ� �Է��� �ϴ� ��� '����' �� stream ���·� �޾ƿ´�!!!!!!
	// getchar, putchar : ���� �״�� �޾ƿ��� ��������
	//	  scanf, printf : ���������� ���ڸ� �м��ϰ�, �� ���ڷ� ��ȯ��ų �� �ִ� ���ڱ�.
	//					  ��, ������ ������ �ߴµ� '.' �� ��Ÿ����. ���� �Է��� ����������. �ȹ���.
	//					  '.' ���� ���ۿ� �����ִµ�, '\n', ' '��? ������? ������!

	return 0;

}