#include<stdio.h>
void main()
{
	double x = 1.5;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%0.1lf, ",x);
		x = x + 1.5;
	}
}
