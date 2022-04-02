//Write a C program to implement the binary Search using the iterative method.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,mid,flag=0,key;
    printf("Enter the number of elements you want to Enter: ");
    scanf("%d",&n);
    int low=0,high=n-1,arr[n];
    printf("Enter the %d elements in an array: ",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("Enter the key to be searched: ");
scanf("%d",&key);
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(key<arr[mid])
        high=mid-1;
        else if(key>arr[mid])
        low=mid+1;
        else if (key==arr[mid])
        {
            printf("Element found at an index %d \n",mid);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Element not found \n");
}
