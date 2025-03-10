/*3 WAP to find area of circle, rectangle and triangle */

#include<stdio.h>

int main()
{
	float pi=3.14,area;
	int r,l,w,ar,base,height;
	//Find of circle
	printf("\nFind the circle = ");
	printf("Enter the value of r = ");
	scanf("%d",&r);
	area=2*pi*r*r;
	printf("\nThe answer is %f",area);
	
	//Find of rectangle
	printf("\nFind the rectangle = ");
	printf("\Enter the value of l = ");
	scanf("%d",&l);
	printf("\nEnter the value of w = ");
	scanf("%d",&w);
	ar=l*w;
	printf("\nThe answer is = %d",ar);
	
	//Find of triangle
	printf("\nFind the triangle = ");
	printf("\nEnter the value of base = ");
	scanf("%d",&base);
	printf("\nEnter the value of height = ");
	scanf("%d",&height);
	ar=(base*height)/2;
	printf("\nThe answer is = %d",ar);
	return 0;
}
