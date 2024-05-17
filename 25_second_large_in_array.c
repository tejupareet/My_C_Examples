/*Name: Teju B Pareet

Description: WAP to find 2nd largest element in an array

Inputs: -
Sample Execution:
Test Case 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5
Test Case 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Second largest element of the array is 22*/

#include<stdio.h>

int sec_largest(int [], int);

int main()
{
    int n, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &n);
    
    int arr[n];
    
    //Read elements into the array
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //funtion call
    ret = sec_largest(arr, n);
    
    printf("Second largest element of the array is %d\n", ret);
}
int sec_largest(int arr[],int n)//function definition
{
    int s_large,f_large;//local variables
    if(arr[0] == arr[1] )
    {
        s_large=0;
        f_large=arr[1];
    }
    else if(arr[0] > arr[1])//condtion to check which is greater and storing it to the 1st large & 2nd large number for first 2 index
    {
         f_large = arr[0] ;
         s_large = arr[1];
    }
    else
    {
        f_large = arr[1];
        s_large = arr[0];
    }
    for( int i=2; i <= n-1; i++ )//loop to check remaing index values
    {
        if( arr[i] > f_large )
        {
            s_large = f_large;
            f_large = arr[i];
        }
        else if( arr[i] > s_large )
        {
            s_large = arr[i];
        }
    }
        return s_large;//returning second largest to called function
}






/*#include<stdio.h>

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
}*/