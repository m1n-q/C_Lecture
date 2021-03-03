#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>



int main()
{
	char ch;
	char temp = '\0';
	int n_ch = 0;
	int n_lines = 0;
	int n_words = 0;

	bool word_flag = 0;
	bool line_flag = 0;



	//while ((ch = getchar()) != '.')
	//{


	//	if (ch == '\n')
	//		n_lines += 1;


	//	if (ch != ' ' && ch != '\n')
	//	{
	//		n_ch += 1;
	//		word_flag = 1;
	//	}

	//	if (word_flag == 1 && (ch == ' ' || ch == '\n'))	// C style : if (word_flag && )
	//	{
	//		word_flag = 0;
	//		n_words += 1;
	//	}

	//	temp = ch;
	//}

	//if (temp != '\0')	// 입력이 있다면.
	//{
	//	n_lines += 1;
	//	if (word_flag == 1)	// 마지막 문자+ '.' 카운팅 안되었음.		 
	//	{
	//		n_words += 1;

	//	}
	//}

	while ((ch = getchar()) != '.')
	{
		if (!isspace(ch))
		{
			n_ch++;

		}

		if (!isspace(ch) && !line_flag)
		{
			n_lines++;
			line_flag = 1;

		}
		
		
		if (ch == '\n')
			line_flag = 0;


		if (!isspace(ch) && !word_flag)
		{
			n_words++;
			word_flag = 1;
		}


		if (isspace(ch))
		{
			word_flag = 0;
		}

	}
	

	printf("\n");
	printf("Characters : %d\n", n_ch);
	printf("Words : %d\n", n_words);
	printf("Lines : %d\n", n_lines);
	
	return 0;

}