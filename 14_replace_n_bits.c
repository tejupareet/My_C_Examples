/*Name: Teju B Pareet
Date: 29-06-2022
Description: WAP to replace 'n' bits of a given number

Inputs: -
Sample Execution: 
Test Case 1:

Enter the number: 10
Enter number of bits: 3
Enter the value: 12
Result = 12

Test Case 2:
Enter the number: 15
Enter number of bits: 2
Enter the value: 1
Result =  13 */

#include <stdio.h>

int replace_nbits(int, int, int);//diclaration of function

int main()//calling function
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    if( n < 32 )//condition for entering 32 bits only
    {    
    res = replace_nbits(num, n, val);//function calling
    
    printf("Result = %d\n", res);
    }
    else
    {
       printf("error: invalid input\n"); 
    }
    return 0;
}
int replace_nbits(int num,int n, int val)//function defination.
{
    int s=0;
    s= val & ((1<<n)-1) | num & (~((1<<n)-1)) ;/*clearing n values from lsb side for value,setting n bits from lsb side for num and replacing n values of num to value */
            return s;//returning s to called function.
}