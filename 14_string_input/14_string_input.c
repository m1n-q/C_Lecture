#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>
int main()
{
	//char fruit_name; // �ѱ��� (1byte)
	char fruit_name[40]; // 1byte ������� 40�� Ȯ��
	
	printf("���� �����ϴ� ������ �����ΰ���?\n");
	
	scanf("%s", fruit_name);	// fruit_name ��ü�� 40���� �޸� ������ 
								// ��ǥ�ϴ� �ּ��̱� ������
								// & ����!
	
	printf("%s�� �����Ͻô±���!\n", fruit_name);	// %s : ������ �迭


	return 0;
}