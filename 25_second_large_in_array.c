#include<stdio.h>

int sec_large(int arr[],int n );

int main()
{
	int i, n=0,temp=0,ret=0;;
	printf("number of elements: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the array elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	ret = sec_large(arr,n);
	
	printf("\nafter sorting : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nsecond largest number of the array is: %d\n",ret);
	
}
int sec_large(int arr[], int n)
{
	int temp=0;
	int i=0;
	for(i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j+1] > arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
	return arr[1];
}