/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>


int main()
{
	float temp , a ,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	// swap two number
	temp = a;
	a    = b;
	b    = temp;
	printf("\nAfter swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f",b);
	return 0;
}
