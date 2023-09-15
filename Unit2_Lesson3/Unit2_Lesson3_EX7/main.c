/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	int Num1 = 5 , Num2 = 7;
	// Swap Two Numbers without temp variable.
	Num1 = Num1 + Num2;
	Num2 = Num1 - Num2;
	Num1 = Num1 - Num2;

	printf("After Swapping , Num1 = %d\n",Num1);
	printf("After Swapping , Num2 = %d ",Num2);

	// Another way to Swap Two Numbers without temp variable.
	Num1 = Num1 ^ Num2;
	Num2 = Num1 ^ Num2;
	Num1 = Num1 ^ Num2;

	printf("\n\nAfter Swapping , Num1 = %d\n",Num1);
	printf("After Swapping , Num2 = %d ",Num2);

	// Another way to Swap Two Numbers without temp variable.
	Num1 = Num1 * Num2;
	Num2 = Num1 / Num2;
	Num1 = Num1 / Num2;
	printf("\n\nAfter Swapping , Num1 = %d\n",Num1);
	printf("After Swapping , Num2 = %d ",Num2);

	return 0;
}

