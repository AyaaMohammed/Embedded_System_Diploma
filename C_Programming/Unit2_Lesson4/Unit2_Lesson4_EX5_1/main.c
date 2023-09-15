/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	int Num , arr[5] , ele , loc , flag =0;
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Num);
	for(int i = 0 ; i < Num ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ele);
	for(int i = 0 ; i < Num ; i++)
	{
		if(arr[i]==ele)
		{
			flag =1;
			loc =i+1;
		}
	}
	if(flag == 1)
	{
		printf("\nNumber found at the location = %d",loc);
	}
	else
	{
		printf("\nNumber Not found ");
	}
	return 0;
}

