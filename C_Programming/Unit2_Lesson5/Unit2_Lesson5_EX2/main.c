/*
 * main.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int Factorial(int num);

int main()
{
	int num ;
	printf("Enter an positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	Factorial(num);
	printf("Factorial of %d = %d",num,Factorial(num));
	return 0;
}

int Factorial(int num)
{
	if(num == 0)
		return 1;
	else
	{
		return num*Factorial(num-1);
	}
}
