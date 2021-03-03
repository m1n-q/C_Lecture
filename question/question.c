#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void printa();
int main()
{	

	



	/* scanf , printf , char , int */


	//int c;
	//char d;
	//scanf("%c %c", &c, &d);
	//printf("%d %d", c, d);


	//printf("sum = %d",sum);



	
	//scanf("%d", &c);	

	//scanf("%c %c", &c, &d);	
	//printf("\n");
	//printf("%hhd\n", c);
	//printf("%d %d\n", c, d);


	//printf("%d", 'A');
	

	// A : int  : 4 byte (00  *  4칸)
	//	   char : 1 byte (00  *  1칸)
	//	   int에 A 입력  : 문자기 때문에 1칸만 차지. cc cc cc 41
	//	   int에 65 입력 : 정수기 때문에 4칸 다 사용. 00 00 00 41

	// printf 에서, %d로 출력 : 4칸 읽어와! char 를 출력해도 4칸 읽어오니까, 이상한 값들도 같이?
	
	//							가 아니고... 해당 변수를 10진수 정수로 출력해!
	//							가진 값을 10진수 정수로 출력.
	//							char는 1byte 공간이니까 이 1byte를 읽어와 10진수 정수로 출력하는 것 뿐. 
	
	
	//int c;
	//scanf("%c", &c);
	//printf("%hhd", c);

	
	




	/* buffer :  왜 \n 마다 출력되나요? */
	
	//char ch;
	//
	//while ((ch = getchar()) != '.')
	//{
	//	
	//	putchar(ch);
	//	
	//}
	//

	//return 0;


	// A : 엔터를 치는 순간 입력버퍼에 전달!
	//     ex ) Hello enter
	//			H, e, l, l, o, \n 을 차례로 getchar가 리턴, putchar가 출력
	//			Hello\n 출력 후, 입력 버퍼가 비었으니 getchar는

	// scanf와 getchar는 이 입력 버퍼에서 값을 가져와서 저장하거나 리턴하는것 뿐입니다
	// scanf가 2번 있으면 콘솔창 입력을 2번 받아야한다고 생각하기 쉽지만,

	//	위와 같이 첫번쨰 scanf에서 asd asds 이렇게 입력하고 엔터를 쳤더니 두 번쨰 scanf에선 콘솔 입력을 활성화 하지 않은 채 바로 b에 s가 입력된 것을 확인할 수 있습니다.

	// 입력 버퍼에 a s d 공백 a s d s \n  이렇게 들어가 있기 때문에 첫번째 scanf와 두번쨰 scanf에서 앞에 있는 a와 s를 뺴와서 저장했기 때문입니다.입력 버퍼에서 빼올 것이 있기 때문에 굳이 두 번째 scanf에서 콘솔 입력이 활성화 되지 않았던 것이죠.


	
	//char ch;
	//int a, b;
	//scanf("%d %d", &a, &b);
	//printf("%d %d\n",a, b);
	//
	//while ((ch = getchar()) != '\n')
	//{
	//	putchar(ch);
	//	
	//}




	//printa();
	//printa();
	//printa();
	//printa();
	//printa();
	//printa();
	//printf("%d", b);
}
void printa()
{
	int a = 0;
	static int b = 0;
	a += 1;
	b += 1;

	printf("a = %d, b = %d\n", a, b);

}