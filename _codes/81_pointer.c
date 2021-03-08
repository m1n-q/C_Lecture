#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	int a, b;

	a = 123;

	int *a_ptr;		// a_ptr ( 주소 담은 변수 ) 가 int 가 아님
					// *a_ptr : a_ptr에 담긴 주소를 따라가면 나오는 변수가 int
					// "int형 변수의 주소" 를 담은 변수라는 것!

	/*
	char* c_ptr;
	long long *ll_ptr;

	sizeof(c_ptr);
	sizeof(ll_ptr);
	*/


	a_ptr = &a;		// & : 주소 연산자, 변수가 사용하는 메모리중 가장 "첫번째 주소"
					// a 는 4bytes int 이므로 4칸중 한칸 가져옴 ㅎㅎ


	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr = 456;	// * : re-direction (간접 접근)

	printf("%d %d %p\n", a, *a_ptr, a_ptr);




	//b = a_ptr;
	b = *a_ptr;
	
	printf("%d\n", b);

	*a_ptr = 789;	

	printf("%d\n", b);		// b 는 값만 저장한 것이기 때문에, 그대로 456
	printf("%d %d %p\n", a, *a_ptr, a_ptr);




	b = 12;
	printf("%d\n", b);		
	printf("%d %d %p\n", a, *a_ptr, a_ptr);


	a = 1004;				// 변수에 직접 저장!
	printf("%d %d %p\n", a, *a_ptr, a_ptr);		// ptr로 해도 같아

	return 0;

}