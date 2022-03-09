#include <stdio.h>
#include<stdlib.h>

int main()
{
int j,m,n,k,key;
printf("Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("Enter the %d elements in your array : ",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched : ");
scanf("%d",&key);
if(a[0]==key)
printf("element found at an index 0");
else
{
    printf("Enter the size in which you want to divide your array :");
    scanf("%d",&m);
while(m!=n)
{
if(a[m]<key)
{
j++;
m=m*j;
}
if(a[m]>key)
k=m/2;
for (int i=k;i<=m;i++)
{
    if(a[i]==key)
    {
printf("Element found at an index of %d",i);
exit(0);
}
else
{
printf("Givem element is not found\n");
exit(0);
}
}
}
}
return 0;
}
