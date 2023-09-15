/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
   float arr[10]  , Sum = 0 , Avg;
   int Num;
   printf("Enter the numbers of data:");
   fflush(stdin); fflush(stdout);
   scanf("%d",&Num);

   for(int i = 0 ; i<Num ; i++)
   {
	   printf("Enter number:");
	   fflush(stdin); fflush(stdout);
	   scanf("%f",&arr[i]);
	   Sum += arr[i];
   }
   Avg = Sum / Num;
   printf("Average = %0.2f",Avg);
	return 0;
}

