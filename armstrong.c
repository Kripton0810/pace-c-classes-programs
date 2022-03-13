#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	scanf("%d",&n);//input
	int count = 0;
	int d,r = 0;
	int copy = n;
	while(n!=0)
	{
		count ++;
		n = n / 10;//furter we are dividing the number
	}
	n = copy;//restoring n
	while(n!=0)
	{
		d = n % 10;
		r = r + pow(d,count);
		n = n/10;
	}
	n = copy;
	if(r == n)
	{
		printf("Yes it is a armstrong number");
	}
	else
	{
		printf("It is not a armstrong number");
	}
		
}
