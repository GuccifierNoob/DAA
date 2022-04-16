#include<stdio.h>
void count_sort(char arr[],int n)
{
    int temp[26]={0};
    for (int i=0;i<n;i++)
       temp[arr[i]-97]++;
    int maxi=0;
    char res='$';
    for (int i=0;i<26;i++)
    {
        if (temp[i]>maxi)
        {
            maxi=temp[i];
            res=i+97;
        }
    }
    if (maxi==1)
      printf("No Duplicate Found");
     else
    printf("%d - %d",res,maxi);     
}

int main()
{
    
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char arr[n];
        for (int i=0;i<n;i++)
            scanf("%c",&arr[i]);
        count_sort(arr,n);
    }
    return 0;
}
