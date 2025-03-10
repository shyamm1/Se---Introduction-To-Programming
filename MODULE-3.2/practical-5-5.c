//Sum of even numbers

#include<stdio.h>

int main()
{
	int num,i,sum=0,count=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{
			count++;
			sum = sum + i;
		}
	}
	printf("\nCount of even number = %d",count);
	printf("\nSum of even numbers = %d",sum);
	return 0;
}
