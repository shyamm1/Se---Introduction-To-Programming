//WAP to check if the given year is a leap year or not.

#include<stdio.h>

int main()
{
	int year;
	printf("\nEnter the year = ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\nThis is a leap year = %d",year);
	}
	else
	{
		printf("\nThis is not leap year = %d",year);
	}
	return 0;
}
