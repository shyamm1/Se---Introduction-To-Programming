/* Looping programs:
1. WAP to print 972 to 897 using for loop
*/	

#include<stdio.h>

int main()
{
	int start,end,i;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	
	for(i=start; i>=end; i--)
	{
		 	printf("\n%d",i);	 	
	}
	return 0;
}


