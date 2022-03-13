#include<stdio.h>
void main()
{
	int n = 465;
	int d,sum =0;
	while(n!=0)//0 div
	{
		d = n % 10; //rem
		sum += d;
		n/=10; //div
	}
	printf("%d",sum);
}
