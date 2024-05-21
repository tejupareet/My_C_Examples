#include<stdio.h>

int *modify_array(int arr[],int size);
int	print_array(int new_arr[], int size);
int main()
{
	int arr[5] = {10,20,30,40,50};
	
	int *new_arr = modify_array(arr,5);
		print_array(new_arr,5);

	
	
	return 0;
}

int *modify_array(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		*(arr+i) = *(arr+i) + 10;
	}
	return arr;
}

int print_array(int new_arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d\n",*(new_arr+i));
	
	}
}