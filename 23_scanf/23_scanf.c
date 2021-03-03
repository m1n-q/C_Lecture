#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>	// intmax_t

int main()
{
	
	/* multiple inputs with blank separators */
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);	 // Note % is absent in front of str (배열 = 대표주소)
	//printf("%d %f %s\n", i, f, str); // scanf는 기본적으로 blank, enter 마다 끊어서 읽음



	/* character */
	//char c;
	//scanf("%c", &c);	// 위에서와 달리 %c 로 입력받을 경우 blank도 입력받음
	//printf("%i\n", c);	// ASCII blank = 32



	/* unsigned as signed */
	//unsigned i;
	//scanf("%i", &i);	// try negative (signed)
	//printf("%i\n", i);	// signed로 받고, unsigned 메모리 i에 저장해놨다가, signed로 꺼냄
	//


	/* unsigned as unsigned */
	//unsigned i2;
	//scanf("%u", &i2);	// try negative (signed)
	//printf("%u\n", i2);	// overflow


	/* floating point number */
	// l for double for %f, %e, %E, %g
	//double d = 0.0;		
	//scanf("%lf", &d);	// %lf : scanf에서는 double은 %lf로 받아야함 , try E notation
	//printf("%f\n",d);	// %f : printf에서는 float & double 을 모두 double로 처리함



	/* width */
	//char str[30];
	//scanf("%5s", str);	// 5글자까지만 입력받음
	//printf("%s\n", str);


	/* h modifier */
	//char i;
	//scanf("%hhd", &i);	
	//printf("%i\n", i);
	

	
	/* integer with character */
	int i;
	scanf("%i", &i);	// try 123a456, 해석을 중단
	printf("%i\n", i);	


	/* j modifier */
	//intmax_t i;			// 가장 큰 정수형 타입. portable
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
	//int i = scanf("%d%d", &a, &b);	// 입력받은 아이템 수
	//printf("%d", i);		

	/* * modifier for printf() */
	
	//int i = 123;
	//int width = 5;
	//printf("Input width : ");
	//scanf("%d", &width);
	//printf("%*d\n", width, i);

	/* * modifier for scanf() */
	//int i;
	//scanf("%*d%*d%d", &i);		// %* : 입력은 받지만, 무시. 변수에 대입하지 않는다
	//printf("3RD INPUT = %d", i);

	return 0;


}


