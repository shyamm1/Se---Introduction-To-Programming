//WAP to print factorial of given number.

#include<stdio.h>

int main()
{
	long int num,i,fact=1;
	printf("\nEnter the number = ");
	scanf("%ld",&num);
	
	for(i=num; i>=1; i--)
	{
		fact = fact * i;
	}
	printf("\nFactorial of %d is %ld",num,fact);
	return 0;
}
