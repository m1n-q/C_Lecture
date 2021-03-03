int main()
{	// 위에서 변수 메모리 미리
	// 선언 : 메모리를 할당
	// 초기화 : 초기 값 대입

	int x;	// declaration : int 메모리 공간을 확보했고, 그 공간에 변수 x로 접근할 수 있다!
	int y;
	int z;

	/*
	int x, y, z; 한번에 선언 가능
	*/


	x = 1;	// assignment
	y = 2;

	/*
	int x = 1, y = 2, z; 선언(메모리 할당)과 동시에 초기화(값 대입) 가능
	*/

	z = x + y;



	return 0;
}