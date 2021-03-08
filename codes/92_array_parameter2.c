#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


double average(int*, int*);


int main()
{	

	int arr1[5] = { 10,13,12,7,8 };

	printf("Avg = %f\n", average(arr1, arr1 + 5));  
	// pointer arithmetic :  + ( sizeof(int) * 5 )
	return 0;


}

double average(int* start, int* end)
{
	int count = end - start;	// pointer arithmetic �̿�! ĭ�� ����!
	double avg = 0.0;
	while (start < end)
	{
		avg += *start++;	// start++ / *start : �Ѵ� �ּ�(pointer) �� ���� ����
		//count++;			// ���� ���°� �����ڳ�
	}

	return avg / (double)count;

}