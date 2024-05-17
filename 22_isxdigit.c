/*Name: Teju B Pareet
Date: 07-07-2022
Description: WAP to implement your own isxdigit() function

Inputs: -
        An ASCII character
Outputs: -
        0 or non-zero value based on condition success or failure
Sample execution: -
Test Case 1:
user@emertxe] ./is_xdigit
Enter the character: a
Entered character is an hexadecimal digit

Test Case 2:
user@emertxe] ./is_xdigit
Enter the character:3
Entered character is an hexadecimal digit

Test Case 3:
user@emertxe] ./is_xdigit
Enter the character:G
Entered character is not an hexadecimal digit*/

#include <stdio.h>

int is_xdigit(int);//function diclaration.

int main()//calling function
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = is_xdigit(ch);//calling function
    if((ret>=48 && ret<=57)||(ret>=65 && ret<=70)||(ret>=97 && ret<=102))/*condition to check the range of ascii equalant decimal number for char*/
    {
        printf("Entered character is an hexadecimal digit \n");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit\n");
    }
    return 0;
}
int is_xdigit(int ch)//function definition
{
    int s=0;
    s=ch;
        return s;//returning the ascii dec number to called function
}