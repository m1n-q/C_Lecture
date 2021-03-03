#include <stdio.h>

int main()
{
	int* pt;
	int(*pa)[3];
	int ar1[2][3] = { 3, };
	int ar2[3][2] = { 7, };
	int** d_pt;			// a pointer to pointer

	pt = &ar1[0][0];	// pointer to int
	pt = ar1[0];		// pointer to int

	//pt = ar1[0];		// Warning

	pa = ar1;			// pointer to int[3]
	//pa = ar2;			// Warning

	d_pt = &pt;			// poitner to (int*)  :  pointer의 주소를 담은 pointer
	*d_pt = ar2[0];		// pointer to int : (to ar2[0][0])
						// ar2[0] : int 에 대한 포인터

	
						//d_pt = ar2;		// Warning. 
						// ar2 : int*[2] 배열에 대한 포인터


	
	// - d_pt : pointer to pointer to int
	// - ar2  : pointer to array of 2-int (int * [2])



	/* pointer and const */






}