/*Write a program that initializes a 24 element integer array 'arr' with arbitary values and
then uses the data to populate a 2-D array, 'brr[4][6]'. Also print the 2-D array*/

#include <stdio.h>
#include <stdlib.h>   /*Header file to use rand and srand*/

int main(void)
{
	/*Declaration of arrays and variables*/
	int one_d[24];
	int matrix[4][6];
	int i,j,k=0;
	unsigned int seed;

	/*Inputing the value of seed for srand function*/
	printf("Enter seed:\n");
	scanf("%u",&seed);

	/*Calling srand and storing random values in one_d array*/
	srand(seed);
	for (int l = 0; l < 24; l++)
	{
		one_d[l]=rand()%101;  /*Limiting the range of rand*/
		printf("one_d[%d]:%d\n",l,one_d[l]);
	}

	/*Storing values of one_d in 2-D array matrix*/
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			k=i*6+j;   /*Specifying the element of one_d*/
			matrix[i][j]=one_d[k];   /*Assigning element of one_d to matrix*/
			k++;
		}
	}


	/*Printing the formed matrix*/
	printf("The matrix is:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%d\t",matrix[i][j]);
			
		
		printf("\n");
	}


}