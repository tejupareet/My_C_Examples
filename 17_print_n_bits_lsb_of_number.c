/*Name: Teju B Pareet
Date: 03-07-2022
Description: WAP to print 'n' bits from LSB of a number

Inputs: -

Sample Execution: 
Test Case 1:
Enter the number: 10
Enter number of bits: 12
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 

Test Case 2:
Enter the number: 15
Enter number of bits: 4
Binary form of 15: 1 1 1 1*/

#include <stdio.h>
void print_bits(int, int);//function dicleration
int main()
{
    int num, n;
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    if(n<=31)
    {
    printf("Binary form of %d:", num);
    print_bits(num, n);
    }
    else
    printf("n= 0 to 31");
 }
void print_bits(int num, int n)//void for non returning out put .
{
    for(int i=n-1; i>=0; i--)//loop to get n number of binary digits
        printf("%d ",1&(num>>i));//shifting right side for masking and &operation 

printf("\n");
}

/*#include<stdio.h>

int print_n_bit_lsb_of_num(int,int);

int main(){
	
	int num,n,res=0;
	
	printf("Enter the num n: ");
	scanf("%d%d",&num,&n);
	
	res=print_n_bit_lsb_of_num(num,n);
	return 0;
}

int print_n_bit_lsb_of_num(int num, int n)
{
	int i,res=0;
	printf("bit of number %d: ");
	
	for(i=n-1; i>=0; i-- )
	{
		printf("%d ",res=(1 & (num>>i)));
	}
}*/
