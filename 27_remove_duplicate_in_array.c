/*Name: Teju B Pareet

Description: WAP to remove duplicate elements in a given array

Input:
Read size and elements into the array
Output:
Test Case 1:
Enter the size: 5
Enter elements into the array: 5 1 3 1 5
After removing duplicates: 5 1 3

Test Case 2:
Enter the size: 5
Enter elements into the array: 2 1 1 1 5
After removing duplicates: 2 1 5*/

#include <stdio.h>
void rmv_duplct(int a[], int size, int b[], int *new_size);//function diclaration
int main()//calling function
{
    int i,size;
    printf("enetr the size: ");
    scanf("%d",&size);//reading size from user
    int a[size]; int b[size];
    int new_size;
    rmv_duplct(a,size,b,&new_size);//function calling 
    printf("After removing duplicates:");
    for(i=0;i<new_size;i++)//loop for printing array elements after removing of duplicates
    {
        printf(" %d",b[i]);
    }
    printf("\n");
    return 0;
}
void rmv_duplct(int a[],int size,int b[],int *new_size)//function definition
{
    int i,j,m=0,s=0,count=1,k=1;
    printf("eneter the elements into the array:\n");
    for(i=0;i<size;i++)//loop for reading array elements from user
    {
        scanf("%d",&a[i]);
    }
    b[0]=a[0];//storing 0th index of array A to 0th index of array B
    for(i=1;i<size;i++)//outer loop to run cycle from 1st index of array A
    {
        for(j=0;j<=count;j++)//inner loop for array B for comparing all elemnts of B with A[i]
        {
            if(a[i] == b[j])//if condition to check if both elemnts are equal or not
            {
                
                s++;//if equal then increment count of s
            }
        }
            if(s==0)//if if count value of s is zero then store that A array element to B
            {
                b[k++]=a[i];
                count++;
                m++;
            }
            s=0;  //if increment is their then make s equals to zero for next iteration       
    }
*new_size=count;//passing array size of B to function by passby refence
}