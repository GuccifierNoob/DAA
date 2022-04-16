#include<stdio.h>

void intersection(int arr1[],int n1,int arr2[],int n2)
{
    int maxi1=INT_MIN;
    for (int i=0;i<n1;i++)
    {
        if (arr1[i]>maxi1)
           maxi1=arr1[i];
    }
    int temp1[maxi1+1]={0};
    for (int i=0;i<n1;i++)
        temp1[arr1[i]]++;
        
    int maxi2=INT_MIN;
    for (int i=0;i<n2;i++)
    {
        if (arr2[i]>maxi2)
           maxi2=arr2[i];
    }
    int temp2[maxi2+1]={0};
    for (int i=0;i<n2;i++)
        temp2[arr2[i]]++;
        
    for (int i=0;i<n1;i++)
    {
        if (temp1[arr1[i]]!=0 && temp2[arr1[i]]!=0)
           printf("%d ",arr1[i]);
    }   
}

int main()
{
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for (int i=0;i<n1;i++)
      scanf("%d",&arr1[i]);
     
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    for (int i=0;i<n2;i++)
      scanf("%d",&arr2[i]);
    
    intersection(arr1,n1,arr2,n2);
    return 0;
}
