/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	float Num1 , Num2;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&Num1 , &Num2);
	printf("Product: %f",Num1*Num2);
	return 0;
}
