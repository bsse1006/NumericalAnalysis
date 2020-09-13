#include <stdio.h>
#include <math.h>

int main (void)
{
	int i, n=1000000;
	double a=1, h;
	
	h=a/n;
	printf("a = %9.6f\n",a);
	
	a=0;
	
	
	for(i=0;i<n;i++)
	{
		a+=h;
	}
	
	printf("a = %9.6f\n",a);
	i = 0;
	while(a!=0)
	{
		a=a/2;
		i++;
	}
	
	printf("%d\n",i);
	printf("%f\n",a);
	printf("%lf\n",a);
	printf("%e\n",a);
	printf("%le\n",a);
	printf("%g\n",a);
	printf("%lg\n",a);
	
	return 0;
}
