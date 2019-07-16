#include <stdio.h>

int binary_search(int key, int *arr, int min, int max)
{
	if(max>=min)
	{
		int mid;
		mid = min+(max-min)/2;
		if(arr[mid]==key)
			return mid;
		if(arr[mid]>key)
			return binary_search(key, arr, min, mid-1);
		else
			return binary_search(key, arr, mid+1, max);			
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,11,22,33,44};
	int max;
	max = sizeof(arr)/sizeof(arr[0]);
	int key;
	printf("\nEnter element array: ");
	scanf("%d", &key);	
	int find;
	find = binary_search(key, arr, 0, max-1);
	if (find>=0)
		printf("\nElement is found index [%d]\n", find);
	else 
		printf("\nElement not found\n");
	
	return 0;
}

























