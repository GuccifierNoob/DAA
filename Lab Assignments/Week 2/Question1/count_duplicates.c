//write a c program to count the number of duplicate elements if present in an array
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
	int arr[] = {1,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,5,5,5,25,75,75,75,97,97,97 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x =2;
	int result = binarySearch(arr, 0, n - 1, x);
   printf("%d",result);
	return 0;
}
