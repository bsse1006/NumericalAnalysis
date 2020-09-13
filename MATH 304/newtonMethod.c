#include <stdio.h>
#include <math.h>

#define EPS 1.0e-6

double f (double x)
{
	return pow(x,3)-4*x-8.95;
}

double f0 (double x)
{
	return 3*pow(x,2)-4;
}

int main (void)
{
	double a;
	
	scanf("%lf", &a);
	
	double x0 = a-f(a)/f0(a);
	
	
	while(fabs(f(x0))>=EPS)
	{
		x0 = x0-f(x0)/f0(x0);
	}
	printf("Root is %lf\n",x0);
	
	return 0;
}
