#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	double num, min, max;
	
	double tot = 0;
	unsigned count = 0;
	

	while ((scanf("%Lf", &num) == 1))
	{
		count++;
		tot += num;
		if (count == 1)			// 혹은 FLT_MIN, MAX로 초기화
		{
			min = max = num;
		}
		else
		{
			if (num > max)
				max = num;
			// max = (num > max) ? num : max;

			else if (num < min)
			min = num;
			// min = (num < min) ? num : min;
		}
	}


	printf("min = %f, max = %f, avg = %f", min, max, tot / (double)count);
	return 0;

}