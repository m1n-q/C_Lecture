#include <stdio.h>  // 전처리기 링커에서 처리
					// 헤더파일
					
int main()
{	
	int x, y, sum;

	x = 1;
	y = 1414;
	sum = x + y;


	
	// print formatted
	// %i : INTEGER	(정수)
	// %d : DECIMAL (10진수)

	printf("%i + %i = %i 입니당ㅋ", x,y,sum);
	printf("\a");	// 경고음 출력
	
	
	
	return 0;
}
