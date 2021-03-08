#include <stdio.h>
#include <stdbool.h>



// 선언과 정의를 분리할 수 있다 

// 함수를 만들 때에는
// 입력이 무엇 , 출력이 무엇, 생각할 것


// function declaration , prototyping
void say_hello(void);

int main()
{
	
	int x, y, z;


	x = 5;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();	// step into : 함수의 정의부에 접근할 수 있으면 접근!
	say_hello();	// step over : 실행만 시키고 지나간다. 
	say_hello();


	
	return 0;


}


// function definition
// 컴파일 후, 링킹하는 과정에서 몸체를 연결!

void say_hello(void)	// 입력도 없고 출력도 없다. (void)
{						// 기능만 수행
	

	int x = 1;			// main의 x 와 다른 변수
	x = 10;

	printf("Hello :D");

	return;
}

