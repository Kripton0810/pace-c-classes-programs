#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr = (int *)malloc(5*sizeof(int)),i;
	memset(ptr,0,5*sizeof(int));
//	int *ptr = (int *)calloc(5,sizeof(int))
	for(i = 0;i<2;i++)
	{
		scanf("%d",(ptr+i));
	}
//	malloc
//	calloc
for(i = 0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
/*
	[|	|	|	|	|]
	
*/
