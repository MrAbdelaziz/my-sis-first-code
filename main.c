#include <stdio.h>
int main ()
{
	float a,b;
	printf ("donnez la valeur de a:");
	  scanf ("%f",&a);
		printf ("donnez la valeur de b:");
	  scanf ("%f",&b);
    if (a>b)
    {
    	printf ("la valeur %.2f est superieur a %.2f\n",a,b);
	}
	else 
	{ 
	if (a<b)
	{
		printf ("la valeur %.2f est inferieur a %.2f\n",a,b);
	}
	else 
	{ 
	printf ("la valeur %.2f est egal a %.2f\n",a,b);
	}
	}
	return 0 ;
	  }
