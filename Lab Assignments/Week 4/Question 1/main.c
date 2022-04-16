#include <stdio.h>
int comp=0;
int merge(int arr[],int l,int mid,int h)
{
    int count=0;
    int i=l,j=mid+1;
    int temp[h-l+1];
    int k=0;
    
    while (i<=mid && j<=h)
    {
        if (arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            count+=mid-i+1;
        }
        comp++;
        
    }
    
    
    for (;i<=mid;)
         temp[k++]=arr[i++];
         
    for (;j<=h;)
         temp[k++]=arr[j++];
         
    for (int f=0;f<k;f++)
        arr[f+l]=temp[f];
        
    return count;
}
int merge_sort(int arr[],int l,int h)
{
    int inversion=0;
    if (l<h)
    {
        int mid=l+(h-l)/2;
        inversion+=merge_sort(arr,l,mid);
        inversion+=merge_sort(arr,mid+1,h);
        inversion+=merge(arr,l,mid,h);
    }
    return inversion;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i=0;i<n;i++)
           scanf("%d",&arr[i]);
        
        int inv = merge_sort(arr,0,n-1);
        for (int i=0;i<n;i++)
           printf("%d ",arr[i]);
           
        printf("Inversions:%d",inv);
        printf("Comparisions:%d",comp);
    }
    return 0;
}
