#include <stdio.h>
#include <stdbool.h>



// ����� ���Ǹ� �и��� �� �ִ� 

// �Լ��� ���� ������
// �Է��� ���� , ����� ����, ������ ��


// function declaration , prototyping
void say_hello(void);

int main()
{
	
	int x, y, z;


	x = 5;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();	// step into : �Լ��� ���Ǻο� ������ �� ������ ����!
	say_hello();	// step over : ���ุ ��Ű�� ��������. 
	say_hello();


	
	return 0;


}


// function definition
// ������ ��, ��ŷ�ϴ� �������� ��ü�� ����!

void say_hello(void)	// �Էµ� ���� ��µ� ����. (void)
{						// ��ɸ� ����
	

	int x = 1;			// main�� x �� �ٸ� ����
	x = 10;

	printf("Hello :D");

	return;
}

