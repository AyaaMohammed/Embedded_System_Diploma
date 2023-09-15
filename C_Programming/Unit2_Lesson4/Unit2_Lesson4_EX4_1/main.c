/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	int N , ele , loc , arr[6] ;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&N);
	for(int i =0 ; i<N ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&ele);
	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&loc);
	for(int i = N ; i>=loc ; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[loc-1] = ele;
	for(int i =0 ; i<=N ; i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

