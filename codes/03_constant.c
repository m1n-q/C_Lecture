#define _CRT_SECURE_NO_WARNINGS
// scanf ���� �߻��� �ۼ�
// properties - preprocessor definition ������ ���� (debug��忡��)

#include <stdio.h>

const int angel = 1004;
// ������ / �ڷ��� / ��ȣ�� ��� / ���ͷ� ���
// const �����ڸ� �ٿ� ���� angel �� ���ȭ��

int main() 
{
	int i = 0;


	// scan formatted
	// �ܼ�â�� �Էµ� ���� ��ĵ
	// & (ampersand) : ���� ��ü�� �ƴ� ������ '�ּ�'�� �޴´�!

	// %d : ���� ���·� �Է��� ����
	// �Էµ� ���� �ش� �ּ� �޸𸮿� ���� ����, �����
	
	scanf("%d", &i); 

	// ���� �߻�
	// _CRT_SECURE_NO_WARNINGS ����϶�� �޼���.




	printf("Value is %d\n", i);

} 