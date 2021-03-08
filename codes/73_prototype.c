#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



// black-box : �Է�,����� ������ ���� �۵��� ��.
// black-box�μ��� �Լ��� ���� �������ϰ�, ���θ� ä��������.


// compile �ܰ迡����, �Լ��� black-box�μ� ���������� �˸� ��!!
// prototype�� �־ compile ����! ( build = compile + linking ) 
// ��ü�� ��� compile error �� ����!



void print_ch(char ch, int len);			// parameter �������, definition���� ä�� ���� ����!
void sort_mid(char name[], char adress[]);	// parameter�� void �� �Ͱ��� �ٸ�! ä��� �ȵ�!
void get_str(char arg[]);					// ������ �����ϰ� �ڷ����� ��뵵 ����! 
											// ��� �ڷ����� ����, ��� �ڷ����� �����°��� �˸� �Ǵϱ�

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