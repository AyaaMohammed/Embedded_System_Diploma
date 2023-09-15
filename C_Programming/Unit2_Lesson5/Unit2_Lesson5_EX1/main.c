/*
 * main.c
 *
 *  Created on: Jul 25, 2023
 *      Author:	Aya Mohamed
 */
#include <stdio.h>

int CheckPrime(int n);

int main()
{
	int num1 , num2 , flag ;
	printf("Enter two numbers(intervals) :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1 , &num2);
	printf("prime numbers between 10 and 30 are: ");
	for(int i = num1+1 ; i<num2 ; i++)
	{
		flag =CheckPrime(i);
		if(flag == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;

}
int CheckPrime(int n)
{
	int k = 0;
	for(int j =2 ; j<=n/2 ; j++)
	{
		if(n%j == 0)
		{
			k = 1;
			break;
		}
	}
	return k;
}
