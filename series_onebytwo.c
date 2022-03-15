#include<stdio.h>
void main()
{
	double sum = 0.0;
	int i;
	for(i=1;i<=19;i++)
	{
		sum = sum + (i/(i+1.0));
	}
	printf("The sum is : %lf ",sum);
}
