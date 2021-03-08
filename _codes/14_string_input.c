#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>
int main()
{
	//char fruit_name; // 한글자 (1byte)
	char fruit_name[40]; // 1byte 저장공간 40개 확보
	
	printf("가장 좋아하는 과일이 무엇인가요?\n");
	
	scanf("%s", fruit_name);	// fruit_name 자체가 40개의 메모리 공간을 
								// 대표하는 주소이기 때문에
								// & 생략!
	
	printf("%s를 좋아하시는군요!\n", fruit_name);	// %s : 문자의 배열


	return 0;
}