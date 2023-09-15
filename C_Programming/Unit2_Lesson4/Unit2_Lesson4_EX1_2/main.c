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
	int Freq = 0 , i = 0;
	char ele;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(text);

	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ele);

	while(text[i] != '\0')
	{
		if(text[i] == ele)
		{
			Freq++;
		}
		i++;
	}
	printf("Frequency of %c = %d",ele,Freq);
	return 0;
}

