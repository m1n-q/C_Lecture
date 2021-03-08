#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




double average(double arr[], int size_arr);


int main()
{	
	double arr1[5] = { 10,13,12,7,8 };
	//double arr2[5] = { 1.8, -0.2, 6.3, 13.9, 20.5 };
	double arr2[3] = { 1.8, -0.2, 6.3 };


	
	printf("arr1 : Address = %p\n", arr1);
	printf("arr1 : Size = %zd\n", sizeof(arr1));
	printf("Avg = %f\n", average(arr1, 5));
	printf("\n");


	printf("arr2 : Address = %p\n", arr2);
	printf("arr2 : Size = %zd\n", sizeof(arr2));
	printf("Avg = %f\n", average(arr2, 3));

	return 0;

}





//double average(double arr[5])	
//double average(double arr[3])	
double average(double arr[], int size_arr)
{
	double avg = 0.0;

	//printf("in function : Size of array  = %zd\n", sizeof(arr));
	for (int i = 0; i < size_arr; ++i)
	{
		avg += arr[i];
	}
	avg /= (double)size_arr;

	return avg;
}


/*
	NOTE

	[]���� ���� �ǹ̰� ����. pointer �� ����!
	printf("in function : Size of array  = %zd\n", sizeof(arr));
	
	-> arr�� pointer�� �޾����� �� �� �ִ�.
	-> �迭 Ư���� �����Ͱ� ���� ������, ��°�� �����ϱ⺸�� pointer�� �޾ƿ��� ��.
	-> ���� ��ü �迭 size �� �� ���� ����!


	*** size �� ���� parameter �� �޾��־�� ��! ***

	


	double average(double *arr)
	double average(double *)

	double average(double []arr)
	double average(double [])	
	
	-> ���������δ� pointer �� ������
	-> �迭 ������� ģ���� ǥ��

	double average(double *, int n)
	
	-> �ٵ� ������ �̷��� ���� �迭 �ڸ��ΰ� �� ����!

*/