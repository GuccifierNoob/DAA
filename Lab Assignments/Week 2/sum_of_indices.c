//write a c program to to find the three indices which can be represented as the sum like a[i]+a[j]=a[k]
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n;
    printf("Enter the number of the test cases : ");
    scanf("%d",&t);
    for(t;t>0;t--)
    {
        printf("Enter the size of the array :");
        scanf("%d",&n);
        int a[n];
        printf("Enter the elements in an array :");
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\nThe indices of an array which can be represented as sum of a[i]+a[j]=a[k] are :\n ");
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=2;k<n;k++)
                if(a[i]+a[j]==a[k])
                printf("%d , %d , %d\n",i,j,k);
            }
        }
    }
    return 0;
}
