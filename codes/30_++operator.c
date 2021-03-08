#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int a = 0;
	//
	//
	//a++;
	//printf("%d\n", a);

	//++a;
	//printf("%d\n", a);

	//double b = 0;

	//b++;
	//printf("%f\n", b);

	//++b;
	//printf("%f\n", b);


	//int count = 0;

	//// ++count : 값을 증가시킨 후 사용
	//// count++ : 값을 사용한 후 증가
	//
	//while (count < 10)			// ++count , count++
	//{

	//	printf("%d ", ++count);
	//	
	//	//++count : count 값 증가 후 printf에 전달
	//	

	//	//count++ : printf 에 count 값 전달 후 증가
	//	

	//}


	//int i = 3;
	//int j = 2 * --i;		// i 감소 후 전달
	//printf("i = %d, j = %d\n", i, j);

	//i = 3;
	//j = 2 * i--;			// i 전달 후 감소
	//printf("i = %d, j = %d\n", i, j);


	/* very high precedence */

	//int x, y, z;

	//x = 3, y = 4;
	//z = (x + y++) * 5;			// (x + y)++ or x + (y++) ? 후자!!
	//							// 우선순위가 높은 건 맞는데,
	//							// 후위연산자기 때문에 계산 뒤에 증가.
	//							// 3 + 4 한 다음 4++
	//printf("x = %d y = %d z = %d", x, y, z);



	/* ++ & -- for modifiable LValues */

	//int x = 1, y = 1, z;
	//z = x * y++;	// x * (y++)
	//
	//z = (x * y)++;	// (x*y) : RValue, 메모리 공간 없는 임시 값
	//					// ++ 적용 불가.
	//
	//z = 3++;			// 리터럴 : RValue


	///* Bad practices */

	//// 한 문장에 여러번 호출되면 위험

	//int n = 1;
	//printf("%d %d", n, n * n++);	// 여러번 사용되면, 시스템마다 다르게 나올 수 있음.
	//int x = n / 2 + 5 * (1 + n++);
	//int y = n++ + n++;

	





}


