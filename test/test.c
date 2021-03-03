#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> //	malloc()
#include <cstddef>

	//struct MyStruct
	//{
	//	int i;
	//	float f;
	//};

	int main()
	{
		/* 1. size of basic types */
		int a = 0;
		unsigned int int_size1 = sizeof(a);		// �Լ�ó�� ��� ����
		unsigned int int_size2 = sizeof(int);	// �ڷ��� ���� ����
		unsigned int int_size3 = sizeof a;		// ������ó�� ��� ����

		// portable type
		// size_t : �ش� �ý��ۿ��� � ��ü, ���� ������ �� �ִ� �ִ� ũ�⸦ ǥ���Ѵ�.
		//			�ý��ۿ� ���� �������� �ڷ���

		size_t int_size4 = sizeof(a);	// typedef : 32bits or 64bits
		size_t float_size = sizeof(float);

		printf("Size of int type = %u bytes.\n", int_size1);
		printf("Size of int type = %zu bytes.\n", int_size4);		// %zu : size_t
		printf("Size of float type = %zu bytes.\n", float_size);	// %zu : size_t




		/* 2. size of arrays */

		int int_arr[30];	// int_arr[0] = 1024; ...
		int* int_ptr = NULL;	// �ּҸ� ���� �� �ִ� ����
		int_ptr = (int*)malloc(sizeof(int) * 30);	// 4bytes * 30 ��ŭ �޸𸮸� �Ҵ�ް�, �� ��ǥ �ּҰ��� ���̿� ����
		// int_ptr[0] = 1024; ...

		printf("Size of array = %zu bytes\n", sizeof(int_arr));	// 4bytes * 30	
																// �迭 �������� �迭 �޸� ������ ��ǥ�ϴ� 
																// �� ���� �ּҰ��̶�� �ߴµ�?
																// �� ����� ���;� �ϴ� �� �ƴѰ���?


		printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));	// �ּҸ� ���� ������ ������

		// �� �� 120byte �� ��ǥ�ϴ� �ּҰ��ε� ��?

		// int_arr : 120byte �޸� ����������, ����� ���� ��ǥ�ּҷ� ��� �ٲ�� ��
		//			 ����Ǵ� ���� 120byte�� ����
		//			 compile�� �� 120byte

		// int_ptr : 4byte�� ����� ��, ���߾� runtime �� �޸� ���� ����
		//			 compiler�� ������ ����� �� �� �ִٰ� ����, compiler�� ����� �� �� ����




		/* 3. size of character array */

		char c = 'a'; // ������ ���ͷ� ''
		char string[10]; // max 9 character + '/0' (null character) : ��ħǥ ����

		size_t char_size = sizeof(char);
		size_t str_size = sizeof(string);

		printf("Size of char type = %zu bytes\n", char_size);
		printf("Size of string type = %zu bytes\n", str_size);	//1byte * 10



		/* 4. size of structure */


		//printf("%zu\n", sizeof(struct MyStruct));	// int 4 + float 4 = 8







	}

