#include<stdio.h>
int main()
{
	int arr[3][4];
	const int PAPAYA = 100, MANGO = 150, GRAPES = 50;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	int totalrev = 0;
	int toatalfruits;
	int cost = 0;
	for(i=0;i<3;i++)
	{
		toatalfruits = 0;
		if(i==0)
		{
			cost = PAPAYA;
		}
		else if(i==1)
		{
			cost = MANGO;
		}
		else if(i==2)
		{
			cost = GRAPES;
		}
		for(j=0;j<4;j++)
		{
			toatalfruits += arr[i][j];
		}
		
		printf("%d ",(toatalfruits*cost));
	}
	printf("\n");
	
	for(i=0;i<4;i++)
	{
		toatalfruits = 0;
		
		for(j=0;j<3;j++)
		{
			if(j==0)
			{
				cost = PAPAYA;
			}
			else if(j==1)
			{
				cost = MANGO;
			}
			else if(j==2)
			{
				cost = GRAPES;
			}
			toatalfruits += arr[j][i]*cost;
//			printf("%d ",arr[j][i]);
		}
//		printf("\n");
		totalrev += toatalfruits;
		printf("%d ",(toatalfruits));
	}
	printf("\n");
		printf("%d",(totalrev));
	return 0;	
}
