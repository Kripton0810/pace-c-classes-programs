#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("names.txt","r+");
	char ch[300];
	if(fptr)
	{
		printf("File is present\n");
//		while(fscanf(fptr,"%s",ch)!=EOF)
//		{
//			printf("%s\n",ch);
//		}
//		fprintf(fptr," I love my mother too...");
//		printf("%s",fgets(ch,300,fptr));
		fseek(fptr,10,SEEK_SET);
		long int k = ftell(fptr);
		printf("%d\n",k);
		printf("%s",fgets(ch,300,fptr));
//		rewind(fptr);
//		printf("\n%s",fgets(ch,300,fptr));
	}
	else
	{
		printf("File is not present");
	}
	fclose(fptr);
	return 0;
}
