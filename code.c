#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void PrintArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[]={0,1,2,4,3,5,7};
    int n=sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    PrintArray(a,n);
    return 0;
}