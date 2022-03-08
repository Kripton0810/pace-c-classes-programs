#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements how many elements??\n");
    scanf("\n %d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Quicksort(a,0,n-1);
    printf("After sorting array elements are:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int partition(int a[],int lb,int ub)
{
    int pivot,start,end,temp;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(&a[start],&a[end]);
        }
        swap(&a[pivot],&a[end]);
    }
    return end;
}

int Quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }
}
