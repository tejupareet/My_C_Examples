/*Name: Teju B Pareet

Description:WAP to implement your own islower() function

Inputs: -

        An ASCII character

Outputs: -

        0 or non-zero value based on condition success or failure

Sample execution: -
Test Case 1:
user@emertxe] ./c_type_lib
Enter the character: a
Entered character is lower case alphabet
Test Case 2:
Enter the character:3
Entered character is not lower case alphabet*/

#include <stdio.h>

int my_islower(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:"); //Read size from the user
    scanf("%c", &ch);
    
    ret = my_islower(ch);//function call
    if( ret >= 97 && ret <= 122 )
    {
	printf("Entered character is lower case alphabet\n");
    }
    else
    {
	printf("Entered character is not lower case alphabet\n");
    } 
    return 0;
}
int my_islower(int ch)//fuction definition
{
    int s=ch;
    return s; //returning ascii equalant dec number to called function  
}