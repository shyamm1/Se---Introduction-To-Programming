/*
A 
A B 
A B C
A B C D
A B C D E
*/

#include<stdio.h>

int main()
{
	int row,i,j;
	char ch = 'A';
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			ch = ch + j;
			printf(" %c",ch-1);
			ch = 'A';
		}
		printf("\n");	
	}
	return 0;
}
