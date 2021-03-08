#include <stdio.h>


int main()
{
	float f = 0.123456789f;	// ���ͷ� f	= float
	double d = 0.123456789;	// ���ͷ� �⺻�� = double



	// %f : float, double ����
	printf("%.9f\n", f);	//	float�� ���е� = 6�ڸ�
	printf("%.9f\n", d);




	printf("float : %u byte\n", sizeof(float));
	printf("double : %u byte\n", sizeof(double));
	printf("long double : %u byte\n", sizeof(long double));	// �����Ϸ����� �ٸ�.8 or 12

	f = 123.456f;
	d = 123.456;

	float f2 = 123.456;		// warning : �ι� �޸𸮸� ����ϴ� double�� float�� ��.
	double d2 = 123.456f;	

	int i = 3;
	float f3 = 3.0f;
	double d3 = 3.0;		// float, double ���� '.' ���ֱ�

	float f4 = 1.234e10f;

	float f5 = 0x1.1p1;		// %0x : 16���� - e ��� p ���
	double d5 = 1.0625e0;


	printf("%f %F %e %E\n", f, f, f, f);	// %e : scientific notation
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);				// %a : 16���� �Ǽ��� ���
											// %x : 16���� ����
	


}
	