#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);//input
	int original = n;
	//digit sum...
	int d,r = 0;
	while(n!=0)
	{
		d = n%10;//we are taking digits one by one->storing
		r = r*10 + d; //we are add digits one by one->adding
		n = n / 10;//furter we are dividing the number
	}
	if(r == original)
	{
		printf("Yes it is a Palindrom number");
	}
	else
	{
		printf("It is not a Palindrom number");
	}	
}
