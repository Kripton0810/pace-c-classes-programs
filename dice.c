#include<stdio.h>
void main()
{
	int i,j;
	int c;
	int result = 0;
	for(i=1;;i++)
	{
		c = 0;
		for(j = 1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("%d\n",i);
			result++;
		}		
		if(result == 10)
		{
			break;
		}
	}
}
