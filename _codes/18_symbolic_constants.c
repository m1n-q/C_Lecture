#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592f //	���ͷ��� �Է��ϴ� �ͺ��� (3.141592f�� �Է�)
					 // define���� ��ȣ�� ��� ����
					 // ��ó���� : PI �� 3.141592f�� ��ü�� �� compile
				     // ��ó�� - ������ - ��ŷ
#define MY_NAME "MINKYU"						
int main()
{	

	// const float pi = 3.141592f;	

	float radius, area, circum;
	
	printf("My name is %s\n", MY_NAME);
	printf("Input radius : \n");
	
	scanf("%f", &radius);

	area = PI * radius * radius; 

	circum = 2.0f * PI * radius;


	
	printf("Area is %f\n", area);
	printf("Curcumference is %f\n", circum);

	//TODO: wrong usage, strings, const
	
	return 0;
}