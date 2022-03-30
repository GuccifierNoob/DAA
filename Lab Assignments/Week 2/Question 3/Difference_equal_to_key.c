//write a c program to count the number of pairs of integers such that their difference is equal to given key k
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
printf("Enter the size of an array: ");
int n,key;
scanf("%d",&n);
    int a[n];
    printf("Enter the elements in an array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you wish to search the difference of : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==key)
            printf("%d %d\n",a[i],a[j]);
        }
    }
    return 0;
}

