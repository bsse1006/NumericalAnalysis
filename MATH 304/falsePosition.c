#include <stdio.h>
#include <math.h>

#define EPS 1.0e-6

double f (double x)
{
	return pow(x,3)-4*x-8.95;
}

int main (void)
{
	double a,b;
	
	scanf("%lf%lf", &a, &b);
	
	double x0 = (a*f(b)-b*f(a))/(f(b)-f(a));
	
	if(f(a)*f(b)<0)
	{
		while(fabs(f(x0))>=EPS)
		{
			if(f(a)*f(x0)<0)
			{
				b=x0;
			}
			else
			{
				a=x0;
			}
			
			x0 = (a*f(b)-b*f(a))/(f(b)-f(a));
		}
		printf("Root is %lf\n",x0);
	}
	else 
		printf("Out of bounds!\n");

	return 0;
}
