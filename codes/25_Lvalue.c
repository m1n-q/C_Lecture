#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()

// Object : �����Ͱ� '�޸�' �ȿ� ������ ��, Data object
// LValue , RValue : if Object or not.
//				     �޸� ������ �����ϴ°�? Object, LValue


{
								// L-Value : �޸𸮸� �����ϴ� ������ ��ü (���� ���� ���ΰ� �ƴ�)
								// R-Value : ���� ������ L-Value�� ���Ե� ���� ������
								//			 �ڱ� �ڽ��� L-Value�� �� �� ����


	int a, b, c;				// a, b, c �� ���� ������ L-Value
						
	const int TWO = 2;			// TWO �� ���� �Ұ����� L-Value 
								// (= �� ������ �ƴ϶� �ʱ�ȭ!)

	a = 42;						// 42 �� R-Value
	b = a;						// a�� ���� ���� ����, b�� ���Ͽ� �ӽ����� R-Value ����
	c = TWO * (a + b);			// (a+b)�� R-Value 
								// �޸𸮸� ���� �ο����� ����
								// (���α׷��� ����ϴ� �ӽð�, ������ �����)
}
