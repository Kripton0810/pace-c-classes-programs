#include<stdio.h>
#include<stdlib.h>
void main()
{
//	int *ptr = (int *)calloc(3,sizeof(int *)),i;
//	printf("befoure realloc %d",sizeof(*ptr));
//	
//	realloc(ptr,7*sizeof(int));
//	
//	printf("\nafter realloc %d",sizeof(*ptr));
//	for(i= 0;i<10;i++)
//	{
//		scanf("%d",ptr+i);
//	}
//	for(i= 0;i<10;i++)
//	{
//		printf("%d ",*(ptr+i));
//	}
//	free(ptr);
//	for(i= 0;i<10;i++)
//	{
//		printf("%d ",*(ptr+i));
//	}
	char *ptr = (char *)calloc(30,sizeof(char *)),i;
	scanf("%s",ptr);
	ptr = 0;
//	free(ptr);
	printf("%s",ptr);
}
