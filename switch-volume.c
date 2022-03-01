#include<stdio.h>
void main()
{
	int ch;
	input:
	printf("Input your choice 1) cuboid 2) cylinder 3) cone : ");
	scanf("%d",&ch);
	double vol = 0;
	double l,b,h,r;
	switch(ch)
	{
		case 1:
			
			scanf("%lf%lf%lf",&l,&b,&h);
			vol = l*b*h;
		break;
		
		case 2:
			scanf("%lf%lf",&r,&h);
			vol = 22*r*r*h/7;
			
		break;
		
		case 3:
			scanf("%lf%lf",&r,&h);
			vol = 22*r*r*h/21;
		break;
		
		default:
			printf("Wrong input...\n");
			goto input;
		break;
		
	}
	printf("The volume is : %lf",vol);
}
