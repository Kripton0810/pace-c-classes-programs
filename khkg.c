#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr = (int *)malloc(5*sizeof(int *)),i;
	for(i = 0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}
//	malloc
//	calloc
for(i = 0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	}
}
/*
	[|	|	|	|	|]
	
*/
