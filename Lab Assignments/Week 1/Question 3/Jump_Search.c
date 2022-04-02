//write a c program to search an element by using the jump search algorithm....
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int n,e,point=0,prev=0;
  printf("Enter the size of an array: ");
  scanf("%d",&n);
  int step=sqrt(n);
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",arr[i]);
  printf("enter the element to be searched :");
  scanf("%d",&e);
  if(e<a[0]){
    printf("Element is not found");
    exit(0);
  }
  while(a[point]<e){
    prev=point;
    if(point==n-1){
      printf("Element is not found ");
      exit(0);
    }
    point=point+step;
    if(point>n-1)
       point=n-1;
    for(i=prev+1;i<=point;i++)
    {
      if(a[i]==e)
      {
        printf("Element found at the index %d ",i);
     exit(0);
      }
    }
    printf("Element Not found\n");
    return 0;
  }
