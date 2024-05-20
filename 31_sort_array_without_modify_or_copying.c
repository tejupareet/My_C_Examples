/*
 * Name		: TEJU PAREET
 * Date		: 18/08/2022
 * Description	:Print the values in sorted order without modifying or copying array
 *Inputs: -
            Array on N integer, N
*Sample execution: -
*Test Case 1:
*user@emertxe] ./sort
*Enter the size : 5
*Enter 5 elements 
*10 1 3 8 -1
*After sorting: -1 1 3 8 10
*Original array values 10 1 3 8 -1

*Test Case 2:
*user@emertxe] ./sort
*Enter the size : 7
*Enter 7 elements 
*1 3 2 5 4 7 6
*After sorting: 1 2 3 4 5 6 7
*Original array values 1 3 2 5 4 7 6

*Test Case 3:
*user@emertxe] ./sort
*Enter the size : 4
*Enter 4 elements 
*-1 -2  4 3
After sorting: -2 -1 3 4
Original array values -1 -2  4 3
*/
#include <stdio.h>
//declaring the function
void print_sort(int [], int);

int main()
{
    //declaring the variables
    int size, i;
    //asking the user to enter the size of array
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];    //declaring the array
    
    printf("Enter the %d elements\n",size);//asking user to enter the array elemnts
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
  
    if(size==1)  //if size is equals to one to the print 1st element of array else call the function
    {
        printf("After sorting %d\n",arr[0]);
        printf("Original array values %d\n",arr[0]);
    }
    else
    {
        print_sort(arr, size);
    }
}
void print_sort(int arr[], int size)
{
    //declaring the variables
    int i;
    int large = arr[0],sec_small;
    int small = arr[0];
    //find the large and small elemnts of array
   for (i = 0; i < size; i++) 
   {
        if (arr[i] > large)
        {
            large = arr[i];
            
        }
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("After sorting %d ",small);
    //sorting the array elemnts and finding the second small elements
    for(i = 0; i < size-2; i++)
    {
       sec_small = large;
       for(int j=0; j<size; j++)
       {
           if((arr[j]>small) && (sec_small>arr[j]))
           {
               sec_small = arr[j];
           }
       }
       printf("%d ",sec_small);
       small=sec_small;
    }
    printf("%d \n",large);
    //printing the original array values 
    printf("Original array values ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
     

}