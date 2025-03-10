/* Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

#include<stdio.h>

int main()
{
	int num1,num2;
	
	//Addition
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
	
	//Subtraction
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	printf("\nThe Subtraction of %d and %d is %d",num1,num2,num1-num2);
	
	//Multiplication
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	printf("\nThe Multiplication of %d and %d is %d",num1,num2,num1*num2);
	
	//Division
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	printf("\nThe division of %d and %d is %d",num1,num2,(float)num1/(float)num2);
	
	//Module
	printf("\nEnter the num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the num2 = ");
	scanf("%d",&num2);
	printf("\nThe module of %d and %d is %d",num1,num2,num1%num2);
	return 0;
}
