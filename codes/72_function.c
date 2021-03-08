#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>		//strlen()


#define WIDTH 20
#define NAME "MINKYU SHIN"
#define ADDRESS "Goyang, Korea"



/* 언제 function을 사용할까?


	1. 일반화 : 더 많은 경우에 대해 쉽게 작동하도록. 기능 확장.
				-> 매개변수화!

	2. 같은 기능 반복
	
	refactoring : 작동하는 코드를 만들고
				  똑같이 작동하며 구조가 더 편하고 읽기 쉽고, 유지보수가 쉬운
				  함수를 사용하는 구조로 바꿔주는 작업.
				  똑같이 작동함을 계속 체크하기!

*/




void print_ch(char ch, int len);
void sort_mid(char name[], char adress[]);
void get_str(char arg[]);

int main()
{	
	char name[100];
	char adress[100];
	

	printf("Input name : ");
	get_str(name);
	printf("Input address : ");
	get_str(adress);

	printf("\n");
	sort_mid(name, adress);

	return 0;

}

void print_ch(char ch, int len)
{
	
	while (len != 0)
	{
		printf("%c",ch);
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
	print_ch(' ', name_space);printf("%s\n", name);
	print_ch(' ', adr_space);printf("%s\n", adress);
	print_ch('*', bar_len);
}
void get_str(char arg[])
{
	
	int i=0;
	while ((arg[i] = getchar()) != '\n')
		i++;
	arg[i] = '\0';

	
}