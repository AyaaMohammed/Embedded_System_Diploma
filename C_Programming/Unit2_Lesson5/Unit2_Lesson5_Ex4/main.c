/*
 * main.c
 *
 *  Created on: Jul 26, 2023
 *      Author: Aya Mohamed
 */
#include <stdio.h>
int power(int base , int pow);

int main()
{
	int base , Power;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(postive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Power);
	printf("%d^%d = %d",base,Power,power(base,Power));
	return 0;
}

int power(int base , int pow)
{
	if(pow == 0)
		return 1;
	else
		return base*power(base,pow-1);

}
