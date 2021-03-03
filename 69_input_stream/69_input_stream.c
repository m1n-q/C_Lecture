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
	printf("남은 값 : ");
	while ((c = getchar()) != '\n')
	{
		putchar(c);
	}
	

	// 콘솔 입력은 일단 모두 '문자' 의 stream 형태로 받아온다!!!!!!
	// getchar, putchar : 문자 그대로 받아오고 내보내고
	//	  scanf, printf : 내부적으로 문자를 분석하고, 음 숫자로 변환시킬 수 있는 문자군.
	//					  음, 정수로 받으라 했는데 '.' 이 나타났군. 숫자 입력은 끝났나보다. 안받음.
	//					  '.' 부터 버퍼에 남아있는데, '\n', ' '은? 삭제해? 인프런!

	return 0;

}