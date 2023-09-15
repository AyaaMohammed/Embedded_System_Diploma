/*
 * main.c
 *
 *  Created on: Jul 23, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>

int main()
{
	char text[100];
	int Len = 0 , i = 0;

	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(text);

	while(text[i] != '\0')
	{
		Len++;
		i++;
	}
	printf("Length of string: %d",Len);
	return 0;
}

