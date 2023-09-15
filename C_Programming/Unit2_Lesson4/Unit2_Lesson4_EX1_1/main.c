/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	float arr1[2][2] , arr2[2][2] ;
	float Sum[2][2] ={0};
	int i , j;
	printf("Enter the elements of 1st matrix\n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}
	printf("Sum Of Matrix:\n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			Sum[i][j]+=arr1[i][j] + arr2[i][j];
			printf("%0.2f\t",Sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

