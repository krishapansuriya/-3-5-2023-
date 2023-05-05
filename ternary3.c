#include<stdio.h>
main()
{
	int a=409,b=500,c=288,d=600;
	
	(a>b)?(a>c)?(a>d)?printf("A is maximum"):printf("D is maximum")
	           :(b>c)?printf("B is maximum"):printf("C is maximum")
	     :(b>d)?printf("B is maximum"):printf("D is maximum");
}
