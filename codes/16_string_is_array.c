
#include <stdio.h>

int main()
{
	int a = 1;
	int int_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };	// �迭 �� �ʱ�ȭ
	const char ch = 1;
	


	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);	// index�� ���� ����

	
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
	char str1[10] = "Hello";		// ���������� Hello �ڿ� null character ����.
	char str2[10] = { 'H','i' };	// ������ �ִ� 9ĭ�� ��� ����
	

	// ���ڿ��� ���� ����� ǥ���ϱ� ���� ������ �� ĭ �� ���� ��
	// '\0' : �ƽ�Ű�ڵ� 0


	printf("%c\n", c);
	printf("%c\n", c2);

	printf("%hhi\n", c);
	

	printf("%s", str1);	// HelloHi : ���̿� ���� 4������ ��µ��� �ʴ� ����?
						// '\0' �� ������ ���̻� ������� ����!
	printf("%s\n", str2);

	
	
	
	printf("%hhi %hhi %hhi %hhi %hhi\n", 
		str2[0], str2[1], str2[2], str2[3], str2[4]);
						// ASCII �� ����ϸ� 0, �迭�δ� �޺κе� ���� ��� ����
	
	printf("%c %c %c %c %c %c\n",
		str2[0], str2[1], str2[2], str2[3], str2[4], str2[0]);
						// ���ڷ� ����ϸ� '\0' , printf�� '\0' �� ������ ����� ����.

	printf("%c %c %hhi %hhi %hhi %c\n",
		str2[0], str2[1], str2[2], str2[3], str2[4], str2[0]);
						// '\0' �� ASCII ���ڷ� ����ϸ� �ڿ� ���� �ٽ� �� ���



	printf("���� : %c\n", '0');		// '0'
	printf("ASCII : %hhi\n", '0');	// ASCII 48

	printf("���� : %c\n", '\0');		// \0
	printf("ASCII : %hhi\n", '\0'); // ASCII 0





	return 0;

}