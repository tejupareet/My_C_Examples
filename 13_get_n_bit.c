/*Name: Teju B Pareet
Date: 29-06-2022
Description: WAP to get 'n' bits of a given number

Inputs: -
Sample Execution: 

Test Case 1:
Enter the number: 10
Enter number of bits: 3
Result = 2

Test Case 2:
Enter the number: 15
Enter number of bits: 2
Result = 3 */

#include <stdio.h>

int get_nbits(int, int);//function diclaration

int main()//calling funtion
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    if( n < 32 )//condition to get only 0-31 bits.
    {    
    res = get_nbits(num, n);//function calling 
    
    printf("Result = %d\n", res);
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
int get_nbits(int num,int n)//function defination.
{
    int s=0;
    s=num & ((1 << n)-1);//operation of shifting and masking and output storing in variable s
            return s;//returning s to called fuction
}





/*#include<stdio.h>

int get_n_bits(int,int);

int main()
{
	int num,n,res=0;
	printf("Enter the num and n: ");
	scanf("%d%d",&num,&n);
	res=get_n_bits(num,n);
	printf("Result=%d\n",res);
	return 0;
}

int get_n_bits(int num, int n)
{
	unsigned mask;
	int res=0;
	res=num&(1<<n)-1;
	return res;
}*/