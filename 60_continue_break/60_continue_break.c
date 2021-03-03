#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{

	/* continue */
	//for (int i = 0; i < 10; ++i)	// for loop의 순서 : 루프의 마지막 -> 증감식> 조건식
	//{								// continue 만나면, 밑부분 실행안하고 (실행한 것처럼), 증감식으로.
	//	if (i == 5)
	//		continue;
	//	
	//	printf("%d ", i);
	//}

	/* break */
	//for (int i = 0; i < 10; ++i)	// break를 포함한 첫번째 루프 탈출 : 이, 삼중에서!
	//{								
	//	if (i == 5)
	//		break;

	//	printf("%d ", i);
	//}

	/* while and continue */
	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//	count++;
	//}


	/* continue as a PLACEHOLDER */

	//while (getchar() != '\n')
	//	continue;			// 하는 건 없지만 자리를 차지.
	//						// 뭔가가 들어갈 수 있다는 정도
	//						// null statement ; 와 같지만 잘 안보이니까.
	//						// 주석 기록 해





	/* Need to use continue ? */
	
	//char c;
	//while ((c = getchar()) != '\n')
	//{
	//	// 뉘앙스, 관점 차이! 기능은 동일.

	//	if (c == 'a')
	//		continue;
	//	putchar(c);


	//	if (c != 'a')
	//		putchar(c);

	//}




	/* break */

	/*while ((c = getchar()) != '.')
	{
		putchar(c);
	}

	while(1)	// 좀 더 자주 쓰는 패턴!
	{
		char c = getchar();
		if (c == '.')
			break;
		putchar(c);
	}*/


	for (int i = 0; i < 10; ++i)		// 루프 하나만 깨고 나옴
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == 5)
				break;
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
		
		

	return 0;

}