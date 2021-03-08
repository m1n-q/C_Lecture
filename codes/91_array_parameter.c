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

	[]안의 값은 의미가 없다. pointer 로 전달!
	printf("in function : Size of array  = %zd\n", sizeof(arr));
	
	-> arr을 pointer로 받았음을 알 수 있다.
	-> 배열 특성상 데이터가 많기 때문에, 통째로 복사하기보단 pointer로 받아오는 것.
	-> 따라서 전체 배열 size 를 알 수가 없다!


	*** size 는 따로 parameter 로 받아주어야 함! ***

	


	double average(double *arr)
	double average(double *)

	double average(double []arr)
	double average(double [])	
	
	-> 실질적으로는 pointer 로 받지만
	-> 배열 넣으라는 친절한 표기

	double average(double *, int n)
	
	-> 근데 보통은 이렇게 쓰면 배열 자리인거 다 알음!

*/