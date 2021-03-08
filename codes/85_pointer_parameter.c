#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	//printf("%p %p\n", &a, &b);

} 

void swap2(int* a, int* b)		// 주소를 받겠다!
{	
	//printf("%p %p", a, b);	// 변수 a, b는 포인터 변수! (주소를 가리킴)
	int tmp = *a;				// re-direction
	*a = *b;
	*b = tmp;


}

int main()
{	
	int a = 123;
	int b = 456;

	printf("%d %d\n", a, b);
	
	//TODO: swap a, b

	//int tmp = a;
	//a = b;
	//b = tmp;
	//printf("%d %d\n", a, b);

	////TODO: function

	//swap(a, b);
	//printf("%d %d\n", a, b);	// Why failed?
	//
	// 
	//swap(a, b);
	//printf("%p %p\n", &a, &b);	// swap 함수 안에서의 a, b 는 새로 선언된 다른 변수! (parameter)
	//								// call by value : 입력된 a, b 는 값이 꺼내져 argument로 전달됐을 뿐
		

	//TODO: function2 
	
	swap2(&a, &b);				// parameter가 포인터 : 주소를 넣어줘야함!
	printf("%d %d\n", a, b);	// call by pointer : 입력된 &a, &b (주소) 가 argument로 전달
	

	return 0;

}