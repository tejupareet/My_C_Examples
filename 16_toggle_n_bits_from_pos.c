/*Name: Teju B Pareet
Date: 03-07-2022
Description: WAP to toggle 'n' bits from given position of a number

Inputs: -
Sample Execution: 

Test Case 1:
Enter the number: 10
Enter number of bits: 3
Enter the pos: 5
Result = 50

Test Case 2:
Enter the number: 15
Enter number of bits: 2
Enter the pos: 2
Result =  9*/

#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);//function diclaration

int main()//calling function
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and pos:");
    scanf("%d%d%d", &num, &n, &pos);
    if( n < 32 )
    {    
    res = toggle_nbits_from_pos(num, n, pos);//function calling
    
    printf("Result = %d\n", res);
    }
   else 
    {
        printf("error\n");

    }
    return 0;
}
int toggle_nbits_from_pos( int num, int n, int pos )//function definition
{
   
    return (num^((1<<n)-1)<<(pos-n+1));/*getting nbits from num ,shifting it position and performing Xor operation after operation */
     
}



/*#include<stdio.h>

int toggle_n_bit_pos(int,int,int);

int main(){
	
	int num,n,pos,res=0;
	
	printf("Enter num n pos: ");
	scanf("%d%d%d",&num,&n,&pos);
	
	res=toggle_n_bit_pos(num,n,pos);
	
	printf("after toggling n bit from given position num val= %d\n",res);
	
	return 0;
}

int toggle_n_bit_pos(int num, int n, int pos)
{
	int res=0;
	
	res = (num ^ ((1<<n)-1)<<(pos-n+1));
}*/