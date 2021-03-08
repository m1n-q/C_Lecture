#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void print_arr(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void sum_arr(/*const*/ int arr[], int size)	// �Ǽ� ����
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += arr[i] ++;	// wrong ++
	printf("%d\n", sum);
}

void add_val(int arr[], int size, int val)
{
	for (int i = 0; i < size; ++i)
		arr[i] += val;
}
int main()
{	
	/*const*/ int arr[5] = { 1,2,3,4,5 };

	print_arr(arr, 5);
	sum_arr(arr, 5);
	print_arr(arr, 5);


	add_val(arr, 5, 100);	// arr[5]�� const�ε� �ٲ��...
	print_arr(arr, 5);		// ��? add_val�� parameter�� pointer!
							// ���忡�� ���ҵ� �ٸ� pointer�� �����ϸ� �ٲ� �� ����.



	return 0;

}