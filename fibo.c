#include<stdio.h>
void main()
{
	int a=0,b=1;
	int next;
	int i;
	printf("%d, %d, ",a,b);
	for(i=3;i<=10;i++)
	{
		next = a+b;
		printf("%d, ",next);
		a = b;
		b = next;
	}
}
