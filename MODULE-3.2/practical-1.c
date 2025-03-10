/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo)
*/

#include<stdio.h>

int main()
{
	int num1,num2,choice;
	
	printf("\n1.--------------------->Addition");
	printf("\n2.--------------------->Subtraction");
	printf("\n3.--------------------->Multiplication");
	printf("\n4.--------------------->Division");
	printf("\n5.--------------------->Modulo");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
			break;
			
		case 2 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Subtraction of %d and %d is %d",num1,num2,num1-num2);
			break;
			
		case 3 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Multiplication of %d and %d is %d",num1,num2,num1*num2);
			break;
			
		case 4 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %d",num1,num2,(float)num1/(float)num2);
			break;
			
		case 5 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Modulo of %d and %d is %d",num1,num2,num1%num2);
			break;
	}
	return 0;
}
