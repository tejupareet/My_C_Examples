/*Name: Teju B Pareet
Date: 27-06-2022
Description: WAP to print all primes using Sieve of Eratosthenes method

Inputs: -

A positive integer 'N'. 
Sample execution: -
Test Case 1: A positive number
user@emertxe] ./prime_series
Enter the value of 'n' : 20
The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
Test Case 2 :

Enter the value of 'n' : -20
Please enter a positive number which is > 1*/

#include<math.h>//to perform the math functions
#include<stdio.h>
int main()
{
    int i,j=2,k,n;
    printf("Enetr value of 'N':");
    scanf("%d",&n);
    if( n > 1 )
    {
    int num = sqrt(n);//to find out the number of iteration
    int a[n];//initialisation of array
    for(i=0;i<=n;i++)//loop to store n number of array elements
    {
        a[i]=1;//making all n number of array elements as 1
    }
    for(i=2; i<=num; i++)//loop to find prime number
    {
        if(a[i] == 1)//condition to avoid 0 after inner loop making array element as 0
        {
            for(j=i*i; j<=n; j=j+i)//inner loop to setting non array elements as 0
            {
                a[j]=0;//seeting non prime equals to zero
            }
        }
    }
    printf("The primes less than or equal to %d are: 2",n);
    for(i=3; i<=n; i++)//printing prime numbers which are marked as one
    {
        if( a[i]==1 )
        {
            printf(", %d",i);
        }
    }
    printf("\n");
    return 0;
    }
    else
        printf("Please enter a positive number which is > 1\n");
}


