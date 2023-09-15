/*
 * main.c
 *
 *  Created on: Jul 26, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>
#include <string.h>

void Reverse(char arr[],int n);
int  main()
{
	char a[100];
	printf("Enter a sentence:");
	fflush(stdin); fflush(stdout);
	gets(a);
	Reverse(a,strlen(a)-1);

	return 0;
}

void Reverse(char arr[],int n)
{
	if(n >= 0)
	{
		printf("%c",arr[n]);
		Reverse(arr,n-1);
	}
}
