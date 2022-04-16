//write a c program to count the number of duplicate(frequency) elements if present in an array
#include <stdio.h>
    int count=0;
int binarySearch(int arr[], int l, int r, int x)
{

	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			{
			   count++;
			  binarySearch(arr, l, mid - 1, x);

            }

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	  return count;
}

int main(void)
{
    int n,x,result;
    printf("Enter the limit of an array: ");
    scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the element to be searched: ");
	scanf("%d",&x);
	result = binarySearch(arr, 0, n - 1, x);
   printf("%d",result);
	return 0;
}
