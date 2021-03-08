#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int arr[10];

	int num = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < num; ++i)
		arr[i] = (i + 1) * 100;

	int* ptr = arr;		// = &arr[0]
	*ptr = -1;
	printf("%d", arr[0]);
	printf("%p %p %p\n", ptr, arr, &arr[0]);

	
	
	ptr += 2;			// �ڷ��� ũ�⸸ŭ!

	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);	
	
	// arr�� ������ó��! (���� �������� �ʾ�)
	// �迭 �̸� => �ڱ� �ڽ��� ����Ű�� ������!!!!!!!!!!!!!!!



	//Note : arr += 2; // invalid
					   // ������ ������ �ƴ��ڳ�
					   // �迭 ù �ּҰ� �ٲ�� �ȵ��ڳ�




	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);	// re-direction




	// Warning
	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);



	
	/* pointer usage */
	ptr = arr;
	for (int i = 0; i < num; ++i)
	{
		printf("%d %d\n", *ptr++, arr[i]);	// * / ptr / ++ : ptr �� ���� ������	
											// *ptr / ptr++ ���� �����.
		//printf("%d %d\n", *(ptr + i), arr[i]);
	}
	



	return 0;

}