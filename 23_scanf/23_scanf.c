#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>	// intmax_t

int main()
{
	
	/* multiple inputs with blank separators */
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);	 // Note % is absent in front of str (�迭 = ��ǥ�ּ�)
	//printf("%d %f %s\n", i, f, str); // scanf�� �⺻������ blank, enter ���� ��� ����



	/* character */
	//char c;
	//scanf("%c", &c);	// �������� �޸� %c �� �Է¹��� ��� blank�� �Է¹���
	//printf("%i\n", c);	// ASCII blank = 32



	/* unsigned as signed */
	//unsigned i;
	//scanf("%i", &i);	// try negative (signed)
	//printf("%i\n", i);	// signed�� �ް�, unsigned �޸� i�� �����س��ٰ�, signed�� ����
	//


	/* unsigned as unsigned */
	//unsigned i2;
	//scanf("%u", &i2);	// try negative (signed)
	//printf("%u\n", i2);	// overflow


	/* floating point number */
	// l for double for %f, %e, %E, %g
	//double d = 0.0;		
	//scanf("%lf", &d);	// %lf : scanf������ double�� %lf�� �޾ƾ��� , try E notation
	//printf("%f\n",d);	// %f : printf������ float & double �� ��� double�� ó����



	/* width */
	//char str[30];
	//scanf("%5s", str);	// 5���ڱ����� �Է¹���
	//printf("%s\n", str);


	/* h modifier */
	//char i;
	//scanf("%hhd", &i);	
	//printf("%i\n", i);
	

	
	/* integer with character */
	int i;
	scanf("%i", &i);	// try 123a456, �ؼ��� �ߴ�
	printf("%i\n", i);	


	/* j modifier */
	//intmax_t i;			// ���� ū ������ Ÿ��. portable
	//scanf("%ju", &i);	
	//printf("%ju\n", i);	

	/* Reuglar characters */
	//int a, b;
	//scanf("%d,%d", &a, &b);	// try blank separator
	//scanf("%d, %d", &a, &b);
	//scanf("%d-%d", &a, &b);
	//scanf("%dA%d", &a, &b);


	//printf("%d %d\n", a, b);

	/* char receives blank */
	//int a, b;
	//char c;
	//scanf("%d%c%d", &a, &c, &b); 
	//printf("%d|%c|%d", a, c, b);	


	// sentence?, getchar(), fgets(), etc.

	/* return value of scanf() */
	//int a, b;
	//int i = scanf("%d%d", &a, &b);	// �Է¹��� ������ ��
	//printf("%d", i);		

	/* * modifier for printf() */
	
	//int i = 123;
	//int width = 5;
	//printf("Input width : ");
	//scanf("%d", &width);
	//printf("%*d\n", width, i);

	/* * modifier for scanf() */
	//int i;
	//scanf("%*d%*d%d", &i);		// %* : �Է��� ������, ����. ������ �������� �ʴ´�
	//printf("3RD INPUT = %d", i);

	return 0;


}


