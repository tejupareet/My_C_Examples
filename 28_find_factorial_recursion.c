/*Name: Teju B Pareet

Description: WAP to find factorial of given number using recursion

Inputs: -
 Positive integer N
Sample execution: -
Test Case 1:
user@emertxe] ./factorial
Enter the value of N : 7
Factorial of the given number is 5040

Test Case 2:
Enter the value of N : 5
Factorial of the given number is 120

Test case 3:
Enter the value of N : -1
Invalid Input

Test case 4:
Enter the value of N : 0
Factorial of the given number is 1*/

#include <stdio.h>

int main()
{
    static int num, flag=1;
    static int fact = 1;		//declaring and reading variable as static variables to avoid read or printing val again and again
    if(flag==1)//reading value by user if flag is 1
    {
        printf("eneter the num: ");
        scanf("%d",&num);
        flag=0;//making flag as zero to avoid reading again and again
    }
    if(num>0)//condtion to recursion till 1 only
    {   
        fact=num*fact;//logic for factorial
        num-- ;//decrementing num for next iteration
        main();//calling main fuction for next iteration
    }
    else if(num==0)
    {
        printf("Factorial of the given number is %d",fact);//printing output
    }
    
    else
    {
        printf("invalid input");
    }
        return 0;
}