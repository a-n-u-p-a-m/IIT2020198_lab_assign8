/*Write a program that constructs a matrix populated by user inputs and prints the matrix.
Then, the program should contruct the transpose of the matrix constructed earlier and print
the transpose*/

#include <stdio.h>


int main(void)
{
	/*Declaring the variables and arrays*/
	int matrix[100][100];
	int transpose[100][100];
	int m,n;
	
	/*Initialising the rows and columns*/
	printf("Enter no. of rows:\n");
	scanf("%d",&m);
	printf("Enter no. of columns:\n");
	scanf("%d",&n);

	/*Inputing the elements of the matrix*/
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("matrix[%d][%d]:\t",i,j);
			scanf("%d",&matrix[i][j]);
			printf("\n");
		}
	}

	/*Printing the matrix*/
	printf("The matrix is:\n");
	for (int i = 0; i < m; i++)
	{

		for (int j = 0; j < n; j++)
		{
			printf("%d\t",matrix[i][j]);
		}

		printf("\n");

	}

	
	/*Algorithm to find transpose of the matrix*/
	for (int i = 0; i < m; i++)
	{
		
		for (int j = 0; j < n; j++)
			transpose[j][i]=matrix[i][j];  /*Interchanging the rows and columns*/

	}
	

	/*Printing the transpose of the matrix*/
	printf("The transpose is:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d\t",transpose[i][j]);
		}

		printf("\n");
	}


}

