#include<stdio.h>
void main()
{
	int i;
	int n;
//	scanf("%d",&n);
//	for(i=1  ;  i<=10  ;    i = i+1)
//	// |init| Condition| inc.dec 
//	{
//		printf("%d X %d = %d\n",n,i,n*i);
//	}
//	
//	printf("Out of loop %d",i);
//	i=1;
//	while(i<=10)
//	{
//		printf("%d X %d = %d\n",n,i,n*i);
//		i+=1;		
//	}
//	i=1;
//	do
//	{
//		printf("%d X %d = %d\n",n,i,n*i);
//		i=i+1;
//	}while(i<=10);
	for(i= 11 ; i<=10 ;i++)
	{
		printf("Hello");
	}
	printf("%d\n",i);
	
	i = 11;
	while(i<=10)
	{
		printf("Hello world");
		i++;
	}
	printf("%d\n",i);
	i=11;
	do
	{
		printf("Hello dev");
		i++;
	}while(i<=10);
	printf("%d\n",i);
	
}
/*

	| init (i) | i<=10 | printf("..."); | i++     |
	-------------------------------------------
	| i = 1   |  T     | ....           | i = 1+1 |
	| i = 2   |  T     | ....			| i = 2+1 |
	| i = 3   |  T     | ....           | i = 3+1 |
	| i = 4   |  T     | ....			| i = 4+1 |
	| i = 5   |  T     | ....           | i = 5+1 |
	| i = 6   |  T     | ....			| i = 6+1 |
	| i = 7   |  T     | ....           | i = 7+1 |
	| i = 8   |  T     | ....			| i = 8+1 |
	| i = 9   |  T     | ....           | i = 9+1 |
	| i = 10   |  T     | ....			| i = 10+1 |
	| i = 11   |  F     | xxxx          | xxxxxxxx |
	
	i = 11
	
	
*/
