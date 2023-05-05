#include<stdio.h>
main()
{
	int a=400,b=600,c=800;
	if(a<b)
	{
		if(a<c)
	      {
	      	printf("A is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
}
