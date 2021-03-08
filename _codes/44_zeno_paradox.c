#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{	
	/*
		Simulation of a moving object

		- Speed = 1.0 m/s
		- dt = 1.0s
		- Distance traveled during dt = Speed * dt
	

		- Step 1 : 1.0 m/s * 1.0s = 1.0 m, dist = 1.0 m
		- Step 2 : 1.0 m/s * 1.0s = 1.0 m, dist = 1.0 m + 1.0 m = 2.0 m
		- Step 3 : 1.0 m/s * 1.0s = 1.0 m, dist = 1.0 m + 1.0 m + 1.0 m = 3.0 m
		- ... 

	*/

	const double speed = 10.0;
	const unsigned repeat_max = 100;

	double dt = 1.0;		// 시간간격
	double time = 0.0;		// Elapsed time 
	double distance = 0.0;	

	//for (unsigned i = 0; ++i <= repeat_max;)
	//{
	//	time += dt;
	//	distance += speed * dt;
	//	printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, distance);
	//}


	/*
		Zeno's Paradox

		- Step1 = 1.0 m/s * 1.0s = 1.0 m
		- Step2 = 1.0 m/s * 0.5s = 0.5 m, dist = 1.0 m + 0.5 m
		- Step3 = 1.0 m/s * 0.25s = 0.25 m, dist = 1.0 m + 0.5 m + 0.25 m

	
	*/

	//for (unsigned i = 0; ++i <= repeat_max;)
	//{
	//	time += dt;
	//	distance += speed * dt;
	//	printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, distance);
	//	
	//	dt *= 0.5;	// 곱하기가 나누기보다 빠르다!
	//	// dt /= 2.0;

	//}

	double arc = 0.0, tur = 100.0;

	int count = 0;


	while (count <= repeat_max)
	{
		printf("COUNT : %03d // Archilleus : %f, Turtle : %f\n",count, arc, tur);
		if (arc < tur)
		{
			arc += tur-arc;
			tur += arc * 0.1;

		}
		
		count += 1;

		
	}
	return 0;

}