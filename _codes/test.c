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

		Q4. 위에가 맞다면, 포인터의 배열이 아닌
			그냥 이차원 배열로 선언된 상태에서는 배열 내 배열이 따로 주소를 가질 수 없는 상태?!
*/



	//10_14


	//arr == &arr[0] == &arr 에서
	//arr = &arr[0] 인건 알겠는데,

	//&arr 이 arr과 같다고 할 수 있는지..!
	//indirection level이 다른 것 같아요....
	//
	////그럼 &arr 이 arr의 주소가 맞는게 되는건데...


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

	//	arr[0] 과 &arr[0] 이 같은 이유?

	//	arr[0] 은 스스로 배열명.

	//	배열명은 값으로 어떤 주소를 갖지만,

	//	스스로의 주소는 따로 없음.

	//	그럼
	//	arr[0]이라는 변수? 의 값   
	//	=> arr[0][0]의 주소
	//	
	//	arr[0]의 주소 ( &arr[0] )
	//	=> 배열명의 주소니까 첫 원소의 주소인 arr[0][0]의 주소로 대체됨

 

	// 최종 정리

	// 	arr[0] ->	배열명으로와 포인터로서? 그 주소 &arr[0] ? 
	// 	-> PARR[0] 이 찐 포인터 &parr[0] 존재

	// 	arr == &arr[0], ==&arr ???
	// 	값은 셋다 같지. 

		
	// 	근데 arr 은 ㅇㄷ에 대한 포인터, &arr은 어디에 대한 포인터 ㅋㅋ

	// 	printf("%u %u\n", &arr[0], &arr[0] + 1);


	int a = 1;
		int b = 2;
		int* aptr = &a;
		int* bptr = (long long)&b + 1;
		int j = aptr - bptr;
		printf("%lld %lld\n", (long long)aptr, (long long)bptr);
		printf("%td", j);



}  