//write a c program to find the number of swaps and comparisons by using the inserstion sort algorithm
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the size of an array : ");
    int n,temp,j,comp=0,swap=0;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in an array : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
            comp++;
        }
        a[j+1]=temp;
        swap++;
    }
    printf("Number of comparisons are : %d\n",comp);
    printf("Number of swaps are : %d ",swap);
}
