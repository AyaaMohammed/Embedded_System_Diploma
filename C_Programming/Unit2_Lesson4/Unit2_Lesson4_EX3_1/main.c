/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	int arr[5][5] , Trans[5][5] , Col , Row ;
	int i , j;
	printf("Enter rows and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&Row , &Col);
	printf("Enter elements of matrix:\n");
	for(i=0 ; i<Row ; i++)
	{
		for(j=0 ; j<Col ; j++)
		{
			printf("Enter elements a%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
	for(i=0 ; i<Row ; i++)
	{
		for(j=0 ; j<Col ; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix:\n");
	for(i=0 ; i<Col ; i++)
	{
		for(j=0 ; j<Row ; j++)
		{
			Trans[i][j] = arr[j][i];
		}

	}
	for(i=0 ; i<Col ; i++)
	{
		for(j=0 ; j<Row ; j++)
		{
			printf("%d\t",Trans[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}


