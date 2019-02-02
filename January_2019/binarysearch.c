#include <stdio.h> 
#include <stdlib.h>
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high];  
	int i = (low - 1);  

	for (int j = low; j <= high- 1; j++) 
	{ 
		if (arr[j] <= pivot) 
		{ 
			i++;  
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 


void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 
		if (arr[mid] == x) 
			return mid;  
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x);  
		return binarySearch(arr, mid + 1, r, x); 
	}  
	return -1; 
} 

int main(void) 
{
        int i,n,x;
        int upper=30000,lower=0;
        printf("enter the size of the array:");
        scanf("%d", &n);
        int arr[n];
        printf("elemetns will be entered by random function");
        for(i=0;i<n;i++)
        {
                arr[i] = (rand()%(upper-lower+1))+lower;
        }
        quickSort(arr, 0, n-1);
        for(i=0;i<n;i++)
        {
                printf("%d,",arr[i]);
        }
        printf("enter the number to search for:");
        scanf("%d", &x);
	int result = binarySearch(arr, 0, n - 1, x); 
	if(result == -1)
        printf("Element is not present in array"); 
	else
        printf("Element is present at index %d",result); 
	return 0; 
} 