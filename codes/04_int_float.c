#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int i = 0, j = 0;
	int sum = 0;
	float won = 0.0f;
	float dollar = 0.0f;



	//printf("Input two Integer : ");
	//scanf("%d%d", &i, &j);


	//sum = i + j;




	//printf("%d + %d = %d\n", i, j, sum);

	printf("Input Won :\n");
	scanf("%f", &won);

	dollar = won * 0.00089f;// f �� ������ double��
							// float �� ���ͷ� ���

	printf("dollar = %f$", dollar);

	return 0;

}