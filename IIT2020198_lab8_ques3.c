/*Write a program to check whether the two diagonals of a 3x3 matrix contain the value 1,
and the remaining elements have value 0. If found print the row and colum number for the
elements as ordered pair in the form (row no., column no.). The matrix is populated by user
inputs.*/

#include <stdio.h>

int main(void)
{
	/*Declaration of array and variables*/
	int matrix[3][3];
	int m,n;

	/*Inputing the values of the array*/
	for (m = 0; m < 3; m++)
	{
		for (n = 0; n < 3; n++)
		{
			printf("matrix[%d][%d]\n",m,n);
			scanf("%d",&matrix[m][n]);
		}

		printf("\n");
	}

	/*Printing the array in matrix form*/
	printf("The matrix is:\n");
	for (m = 0; m < 3; m++)
	{
		for (n = 0; n < 3; n++)
			printf("%d\t",matrix[m][n]);
		
		printf("\n");
	}

	

	/*Checking the conditions in question*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			if ((i!=j+1 || j!=i+1) && matrix[i][j]==1)  /*Checking diagonal elements for value 1*/
			{
				printf("value 1 is at row:%d column:%d\n",i,j);  /*Printing the position of diagonal element 1*/
			}
			else if (matrix[i][j]==0)   /*Checking non-diagonal elements for value 0*/
			{
				printf("value 0 is at row:%d column:%d\n",i,j);  /*Printing the position of non-diagonal element 0*/
			}

		}

	}


}