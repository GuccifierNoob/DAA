/*Write a c program to perform the linear search by passing different number of test cases */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,f=0;
    printf("\nEnter the number of test cases: ");
    scanf("%d",&t);
for (int i=0;i<t;i++)
{
    f=0;
    int n,m,c=0;
    printf("\nEnter the size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the %d element in a array",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nEnter the element you want to search: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        c++;
        if(m==arr[i])
        {
        printf("\nNumber of comparision are : %d",c);
        f =1;
            break;
        }
    }
    if(f==0)
printf("\nelement is not found");
}
    return 0;
}
