#include<stdio.h>
main()
{
	int a=299,b=9000,c=590900,d=5888,e=3000;
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is maximum"):printf("E is maximum")
	                 :(b>c)?printf("B is maximum"):printf("C is maximum")
	           :(b>d)?printf("B is maximum"):printf("D is maximum")
	     :(b>e)?printf("B is maximum"):printf("E is maximum");
}
