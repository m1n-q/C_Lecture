#include <stdio.h>
#include <float.h>
#include <math.h>
int main()
{
	// ���е� ����
	//float a, b;

	//a = 1000.0f + 1.0f;
	//b = a - 1000.0f;

	//printf("%f\n", b);		// 1

	//a = 1.0e20f + 1.0f;		
	//b = a - 1.0e20f;		

	//printf("%f\n", b);		// ����ó�� 1�� ���;� �ϴµ�?


	//printf("%f\n", 1.0e20f);
	//printf("%f\n", a);		// �ʹ� ū ���ڿ��� 1�� �ȴ�����...

	
							
	// round-off errors 2
	//float a1 = 0.0f;

	//for(int i =0; i<100 ; i++)
	//{
	//	a1 = a1 + 0.01f;	// �ε��Ҽ��� ǥ���������� 0.01�� ǥ���� �� ����.
	//}						// fraction �κ��� ������ (1/2, 1/4) ���� �����̱� ����.
	//	

	//printf("%f\n", a1);		// �� ������ ������ ���



	// overflow
	//float max = FLT_MAX;
	//printf("%f\n", max);	// 
	//
	//max = max * 100.0f;
	//printf("%f\n", max);	// inf : infinite, ���� �𸣰ڴ�!


	// underflow
	//float min = FLT_TRUE_MIN;
	//printf("%e\n", min);

	//min = min / 2.0f;
	//printf("%e\n", min);	// subnormal : ���ڰ� ���������. �Ҿ���� ����.


	// division by zero

	float f = 104.0f;
	f = f / 0.0f;
	printf("%f\n", f);


	float af = asinf(2.0f);
	printf("%f\n", af);		// nan : not a number, ���������� ��� �Ұ�. ( -1<sin<1 )




}