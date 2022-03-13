#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);//input
	int sq = n*n;//number sq.
	//digit sum...
	int d,r = 0;
	while(sq!=0)
	{
		d = sq%10;//we are taking digits one by one->storing
		r = r + d; //we are add digits one by one->adding
		sq = sq / 10;//furter we are dividing the number
	}
	if(r == n)
	{
		printf("Yes it is a neon number");
	}
	else
	{
		printf("It is not a neon number");
	}
		
}
