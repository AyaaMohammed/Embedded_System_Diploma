/*
 * main.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of G = %d",ch);
	return 0;
}

