#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,i,sum = 0;
	//input
//	scanf("%d%d",&a,&b);
//	for(i=a;i<=b;i++)
//	{
//		sum = sum + i;
//	}
//	printf("sum is %d",sum);
	//factor
	//print number
	//>>-till that num
	//>>-half
	//>>-sqrt
//	int c=1;
//	scanf("%d",&a);
//	for(i=1;i<=sqrt(a);i++)
//	{
//		if(a%i==0)
//		{
//			c=c+1;
//		}
//	}
//	if(c==2)
//	{
//		printf("Yes the number is prime number");
//	}
//	else
//	{
//		printf("The number is not a prime number");
//	}
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		sum += a;
	}
	printf("%d",sum);
}
