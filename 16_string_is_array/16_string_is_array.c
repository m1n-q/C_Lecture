
#include <stdio.h>

int main()
{
	int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };	// 배열 값 초기화
	const char ch = 1;
	


	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);	// index를 통한 접근

	
	//question
	 
	//try char arr
	printf("1231311231 %i\n", &int_arr);
	printf("%i\n", &int_arr[0]);		
	printf("%i\n", &int_arr[1]);
	printf("%i\n", &int_arr[9]);
	printf("%i\n", &int_arr[10]);
	printf("%i\n", &int_arr[11]);
	printf("%i\n", &int_arr[100]);
	printf("%i\n", ch + &int_arr[0]);


	

	
	
	char c = 'a';
	char c2 = 97;
	char str1[10] = "Hello";		// 내부적으로 Hello 뒤에 null character 붙음.
	char str2[10] = { 'H','i' };	// 때문에 최대 9칸만 사용 가능
	

	// 문자열의 끝이 어딘지 표현하기 위해 공간을 한 칸 더 쓰게 됨
	// '\0' : 아스키코드 0


	printf("%c\n", c);
	printf("%c\n", c2);

	printf("%hhi\n", c);
	

	printf("%s", str1);	// HelloHi : 사이에 남은 4공간이 출력되지 않는 이유?
						// '\0' 을 만나면 더이상 출력하지 않음!
	printf("%s\n", str2);

	
	
	
	printf("%hhi %hhi %hhi %hhi %hhi\n", 
		str2[0], str2[1], str2[2], str2[3], str2[4]);
						// ASCII 로 출력하면 0, 배열로는 뒷부분도 강제 출력 가능
	
	printf("%c %c %c %c %c %c\n",
		str2[0], str2[1], str2[2], str2[3], str2[4], str2[0]);
						// 문자로 출력하면 '\0' , printf가 '\0' 을 만나면 출력을 멈춤.

	printf("%c %c %hhi %hhi %hhi %c\n",
		str2[0], str2[1], str2[2], str2[3], str2[4], str2[0]);
						// '\0' 을 ASCII 숫자로 출력하면 뒤에 값도 다시 잘 출력



	printf("문자 : %c\n", '0');		// '0'
	printf("ASCII : %hhi\n", '0');	// ASCII 48

	printf("문자 : %c\n", '\0');		// \0
	printf("ASCII : %hhi\n", '\0'); // ASCII 0





	return 0;

}