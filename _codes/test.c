#include <stdio.h>

/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr + sizeof(*ptr)

*/

int main()
{
	int arr[2][3] = {	{ 1, 2, 3 },
						{ 4, 5, 6 }		};
	

	int* parr[2] = { arr[0], arr[1] };
	

	
	printf("%u %u\n", &arr[0], &arr[0] + 1);

	
	
	

	
		
/*

		Q4. ������ �´ٸ�, �������� �迭�� �ƴ�
			�׳� ������ �迭�� ����� ���¿����� �迭 �� �迭�� ���� �ּҸ� ���� �� ���� ����?!
*/



	//10_14


	//arr == &arr[0] == &arr ����
	//arr = &arr[0] �ΰ� �˰ڴµ�,

	//&arr �� arr�� ���ٰ� �� �� �ִ���..!
	//indirection level�� �ٸ� �� ���ƿ�....
	//
	////�׷� &arr �� arr�� �ּҰ� �´°� �Ǵ°ǵ�...


	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr);
	//printf("%p\n", &arr[0][0]);
	//printf("%p\n", arr[0]);

	//printf("%p\n", **arr);
	//printf("%p\n", **&arr[0]);
	//printf("%p\n", ***&arr);

	//printf("%p\n", *&arr[0][0]);
	//printf("%p\n", *arr[0]);



	

	//10.14 

	//	arr[0] �� &arr[0] �� ���� ����?

	//	arr[0] �� ������ �迭��.

	//	�迭���� ������ � �ּҸ� ������,

	//	�������� �ּҴ� ���� ����.

	//	�׷�
	//	arr[0]�̶�� ����? �� ��   
	//	=> arr[0][0]�� �ּ�
	//	
	//	arr[0]�� �ּ� ( &arr[0] )
	//	=> �迭���� �ּҴϱ� ù ������ �ּ��� arr[0][0]�� �ּҷ� ��ü��

 

	// ���� ����

	// 	arr[0] ->	�迭�����ο� �����ͷμ�? �� �ּ� &arr[0] ? 
	// 	-> PARR[0] �� �� ������ &parr[0] ����

	// 	arr == &arr[0], ==&arr ???
	// 	���� �´� ����. 

		
	// 	�ٵ� arr �� ������ ���� ������, &arr�� ��� ���� ������ ����

	// 	printf("%u %u\n", &arr[0], &arr[0] + 1);


	int a = 1;
		int b = 2;
		int* aptr = &a;
		int* bptr = (long long)&b + 1;
		int j = aptr - bptr;
		printf("%lld %lld\n", (long long)aptr, (long long)bptr);
		printf("%td", j);



}  