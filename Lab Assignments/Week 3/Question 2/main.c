#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Selection_sort(int arr[],int n)
{
    int comp=0,swaps=0;
    int i,j,pos=0,min=0;
    for (i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for (j=i+1;j<n;j++)
        {
            comp++;
            if (min>arr[j])
            {
                min=arr[j];
                pos=j;
            }
        }

        if (pos!=i)
        {
           swap(&arr[pos],&arr[i]);
           swaps++;
        }   
    } 
    printf("Comparisions: %d",comp);
    printf("Swaps: %d\n",swaps);

    for (int i=0;i<n;i++)
           printf("%d",arr[i]);
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
        Selection_sort(arr,n);
    }
}
