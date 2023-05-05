#include<stdio.h>
main()
{
	int a=1000,b=700,c=3000;
	
	(a>b)?(a>c)?printf("A is maximum"):printf("C is maximum")
	     :(b>c)?printf("B is maximum"):printf("C is maximum");
}
