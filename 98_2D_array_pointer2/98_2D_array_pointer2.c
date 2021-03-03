#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	float arr2d[2][4] = { {1.0f, 2.0f, 3.0f, 4.0f }, {5.0f, 6.0f, 7.0f, 8.0f} };
	
	printf("%u\n", (unsigned)arr2d);
	printf("%u\n", (unsigned)arr2d[0]);
	
	
	printf("\n");

	// 다차원 배열에서,
	// arr2d points to arr2d[0] (not arr2d[0][0])
	//				       ㄴ 얘는     ㄴ 얘의 주소     

	//근데 그러면.. arr2d[0]이 arr2d[0][0]의 주소를 가리키고, arr2d가 그 주소를 가리키는 애를 가리키면
	//이중 포인터처럼...? 그러면 &arr2d 가 또 자기 자신의 주소를 가지면서 달라야 하는건데..
	//배열명이라서 완전 포인터처럼 자기 자신주소는 없고 값으로 가진 주소를 알러ㅕ주는건가여


	printf("%u\n", (unsigned)* arr2d);		// arr2d[0]으로 감. arr2d[0]의 값을 보여줌.
	printf("%u\n", (unsigned)& arr2d[0]);
	printf("%u\n", (unsigned)& arr2d[0][0]);

	printf("%f\n", **arr2d);	// arr2d[0]으로 감. arr2d[0]의 값은 &arr[0][0]. arr[0][0]으로 감.
	printf("%f\n", *arr2d[0]);
	printf("\n");



	
	/*printf("%u\n", (unsigned)(arr2d + 1));
	printf("%u\n", (unsigned)(&arr2d[1]));
	printf("%u\n", (unsigned)(arr2d[1]));
	printf("%u\n", (unsigned)(*(arr2d + 1)));
	printf("%u\n", (unsigned)(&arr2d[0] + 1));
	printf("%u\n", (unsigned)(&arr2d[1][0]));

	printf("\n");
	printf("%f\n", *(*arr2d + 1) + 2));*/
	

	for (int i = 0; i < 2; ++i)
	{
		printf("[%d] = %u, %u\n", i, (unsigned)(arr2d[i]), (unsigned)*(arr2d + i));
		for (int j = 0; j < 4; ++j)
		{
			printf("[%d][%d] = %f, %f\n", i, j, arr2d[i][j], *(*(arr2d + i) + j));

			*(*(arr2d + i) + j) += 1.0f;
		}
	}

	// 13: 40 ~ 


	return 0;

}