/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>
#include <string.h>
int main()
{
	char text[100]  , Rev[100] ;
	int i , j;
	printf("Enter the string :");
	fflush(stdin); fflush(stdout);
	gets(text);

	int N= strlen(text)-1;
	for(j = 0,i = N ; i >= 0 ; i--, j++)
	{
		Rev[j] = text[i] ;
	}
	Rev[j] = 0;
	printf("Reverse string is : %s",Rev);
	return 0;
}

