#include<stdio.h>
void main()
{
	int sum = 0;
	int i;
	for(i=1;i<=20;i++)
	{
		sum = sum + (i*i);
	}
	printf("The sum is : %d ",sum);
}
