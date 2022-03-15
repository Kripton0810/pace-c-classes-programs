#include<stdio.h>
void main()
{
	int x = 4;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d, ",x);
		x = 2*x;
	}
}
