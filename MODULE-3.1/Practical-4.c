/*4 WAP to find simple interest*/
//interst

#include<stdio.h>

int main()
{
	int p,r,t;
	double si;
	printf("\nEnter the principle amount = ");
	scanf("%d",&p);
	printf("\nEnter the rate of interst = ");
	scanf("%d",&r);
	printf("\nEnter the time of investment = ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("\nThe simple interst is = %1f",si);
	
	return 0;
}

