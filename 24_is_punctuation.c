/*Name: Teju B Pareet

Description: WAP to implement your own ispunct() function

Inputs: -

        An ASCII character

Outputs: -

        0 or non-zero value based on condition success or failure

Sample execution: -
Test Case 1:
user@emertxe] ./c_type_lib
Enter the character: a
Entered character is not punctuation character
Test Case 2:
Enter the character:$
Entered character is punctuation character*/

#include <stdio.h>

int my_punctuation(int);//function diclaration.

int main()//calling function
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_punctuation(ch);//calling function
    if(ret >= 33 && ret <= 47) 
    {
        printf("Entered character is  punctuation character\n");
    }
    else
    {
        printf("Entered character is not punctuation character\n");
    }
    return 0;
}
int my_punctuation(int ch)//function definition
{
    int s=0;
    s=ch;
        return s;//returning the ascii dec number to called function
}