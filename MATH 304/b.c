#include <stdio.h>
#include <math.h>

int main (void)
{
	int i, n=1000;
	double a=0, b, h, x, y, z;
	
	b = 100;
	
	h=(b-a)/n;
	printf("\"x\",\"x+sin(x)\"\n");
	
	for(i=0;i<=1000;i++)
	{
		x=a+i*h;
		y=x+sin(x);
		printf("%lf, %lf\n",x,y);
	}

	return 0;
}
