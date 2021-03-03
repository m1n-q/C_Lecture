#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



// black-box : 입력,출력은 알지만 내부 작동은 모름.
// black-box로서의 함수를 먼저 디자인하고, 내부를 채워나가자.


// compile 단계에서는, 함수가 black-box로서 무엇인지만 알면 됨!!
// prototype만 있어도 compile 가능! ( build = compile + linking ) 
// 몸체가 없어도 compile error 가 없다!



void print_ch(char ch, int len);			// parameter 비워놓고, definition에서 채울 수도 있음!
void sort_mid(char name[], char adress[]);	// parameter가 void 인 것과는 다름! 채우면 안됨!
void get_str(char arg[]);					// 변수명 생략하고 자료형만 사용도 가능! 
											// 어떠한 자료형이 들어가고, 어떠한 자료형이 나오는가만 알면 되니까

int main()
{
	char name[100];
	char adress[100];


	printf("Input name : ");
	get_str(name);
	printf("Input address : ");
	get_str(adress);

	printf("\n");
	sort_mid(name, adress);	// arguments

	return 0;

}

void print_ch(char ch, int len)
{

	while (len != 0)
	{
		printf("%c", ch);
		len -= 1;
	}
}
void sort_mid(char name[], char adress[])
{
	int name_len = strlen(name);
	int adr_len = strlen(adress);
	int len = (name_len + adr_len) / 2;
	int bar_len = (len - 1) * 2;

	int name_space = (bar_len - name_len) / 2;
	int adr_space = (bar_len - adr_len) / 2;



	print_ch('*', bar_len);
	printf("\n");
	print_ch(' ', name_space); printf("%s\n", name);
	print_ch(' ', adr_space); printf("%s\n", adress);
	print_ch('*', bar_len);
}
void get_str(char arg[])
{

	int i = 0;
	while ((arg[i] = getchar()) != '\n')
		i++;
	arg[i] = '\0';


}