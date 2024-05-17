/*Name: Teju B Pareet
Date: 06-07-2022
Description: WAP to implement Circular left shift

Inputs: -

 Integers num(both +ve and -ve), n(No.of shifts)
Sample execution: -
Test Case 1:
user@emertxe] ./bit_ops

Enter num: 12
Enter n : 3
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0

Test Case 2: 
Enter num: -2
Enter n : 3
Result in Binary: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1*/

#include <stdio.h>

int circular_left(unsigned int, unsigned int);//function diclaration

int main()//calling funtion
{
    unsigned int num, n, ret;//intitialisation
    
    printf("Enter the num:");
    scanf("%u", &num);//taking input for numbers
    
    printf("Enter n:");
    scanf("%u", &n);//taking input to number of bit shift
    printf("Result in Binary:");
    
    ret = circular_left(num, n);//funtion calling
    return 0;    
}
int circular_left(unsigned int num, unsigned int n )//function defination
{
    for( int i = 31; i >= 0; i-- )//loopto print bit one by one
    {
        printf (" %d",(((num<<n)|(num>>(32-n)))>>i)&1);//logic to print circuler left shifted value
    }
}






/*#include<stdio.h>

int circuler_left(unsigned int,unsigned int);

int main(){
	unsigned int num,n;
	
	printf("Enter the num: ");
	scanf("%d",&num);
	printf("Enter the n: ");
	scanf("%d",&n);
	
	circuler_left(num,n);
	return 0;
}

int circuler_left(unsigned int num,unsigned int n)
{
	int i,res=0;
	for(i=31; i>=0; i--)
	{
		printf("%d ",res=(((num<<n)|(num>>(32-n)))>>i)&1);
	}
}*/