#include<stdio.h>


int main()
{
	float a;
	
	float b;
	
	printf("Please type a number:\n");
	
	scanf("%f",&a);
	
	b=a*2.54;
	
	b=(float)b;
	
	printf("%f inch(es) is %f centimeter(s).\n",a,b);
	return 0;
	
	
	
 } 
