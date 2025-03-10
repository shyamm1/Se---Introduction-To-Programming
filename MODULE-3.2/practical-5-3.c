//How many Even numbers are there.

#include<stdio.h>

int main()
{
    int num,i,count=0;
    printf("\nEnter the number = ");
    scanf("%d",&num);
    
    for(i=1; i<=num; i++)
    {
    	if(i%2==0)
    	{
    		printf("\n%d",i);
		}
		count++;
	}
	printf("\ncount of even number = %d",count);
	return 0;
}
