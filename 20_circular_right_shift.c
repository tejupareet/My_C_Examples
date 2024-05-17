/*Name: Teju B Pareet
Date: 10-07-2022
Description: WAP to implement Circular right shift

Inputs: -

 Integers num(both +ve and -ve), n(No.of shifts)
Sample execution: -
Test Case 1:
user@emertxe] ./bit_ops

Enter num: 12
Enter n : 3
Result : 10000000 00000000 00000000 00000001

Test Case 2: 
Enter num: -12
Enter n : 3
Result : 10011111 11111111 11111111 11111110*/

#include <stdio.h>

int circular_right(unsigned int, unsigned int);//function diclaration

int main()//calling funtion
{
    unsigned int num, n, ret;//intitialisation
    
    printf("Enter the num:");
    scanf("%u", &num);//taking input for numbers
    
    printf("Enter n:");
    scanf("%u", &n);//taking input to number of bit shift
    printf("Result in Binary:");
    
    ret = circular_right(num, n);//funtion calling
    return 0;    
}
int circular_right(unsigned int num, unsigned int n )//function defination
{
    for( int i = 31; i >= 0; i-- )//loopto print bit one by one
    {
        printf (" %d",(((num>>n)|(num<<(32-n)))>>i)&1);//logic to print circuler left shifted value
    }
}



/*#include<stdio.h>

int circular_right_shift(unsigned int, unsigned int);

int main()
{
	int num,n;
	printf("Enter num: ");
	scanf("%d",&num);
	printf("Enter n: ");
	scanf("%d",&n);
	
	circular_right_shift(num,n);
	
	return 0;
}

int circular_right_shift(unsigned int num, unsigned int n)
{
	int res=0,i;
	
	for(i=31; i>=0; i--)
	{
		printf("%d ",res=(((num>>n)|(num<<(32-n)))>>i)&1);
	}
}*/