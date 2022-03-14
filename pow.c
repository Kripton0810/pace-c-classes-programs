#include<stdio.h>
void main()
{
	int a = 1;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d, ",a);
		a = a+i;
	}
}
