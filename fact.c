#include<stdio.h>
void main()
{
//	5! = 120 = 1*2*3*4*5
	int n; //user input
	int i;//for loop 
	int fact = 0;// fact init
	scanf("%d",&n);

	for(i = 1;i <= n;i++)
	{
		if(i%2!=0) // odd
		{
			//odd
			fact = fact + i;
		}
		else
		{
			//even
			fact = fact - i;
		}
	}
	printf("%d",fact);
	// 10
	// 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - 10 = ??
	// +   -   +   -   +   -
}
	/*
		5
		1..5
		i = 1
		fact = 1 + 1 = 1
		
		i = 2
		
		fact = 1 * 2 = 2
		
		i = 3
		fact = 2 * 3 = 6
		
		i = 4
		fact = 6 * 4 = 24
		
		i = 5
		fact = 24 * 5 = 120
		i = 6
		fact = 120 * 6 = 720
		
	*/
