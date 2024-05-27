/*Name: Teju B Pareet
Date: 20-07-2022
Description: WAP to reverse the given string using iterative method

Inputs: -

          String

Sample execution: -
Test Case 1:
user@emertxe] ./str_rev
Enter a string : Hello World
Reverse string is : dlroW olleH

Test Case 2:
user@emertxe] ./str_rev
Enter a string : EMERTXE
Reverse string is : EXTREME*/
#include <stdio.h>

void reverse_iterative(char str[]);//function declaretion

int main()//calling function
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);//function calling
    
    printf("Reversed string is %s\n", str);//printing charecters in revrse order
}
void reverse_iterative(char str[])//function definition
{
    int i=0,len=0;
    while(str[i++]!='\0')//loop to count the charecters
    {
        len++;
    }
    char temp;
    int count=len,j=0;
    printf("len=%d\n",len);

    while (j < len/2)//loop to revrse the charecters
    {  
        temp=str[j];
        str[j]=str[count-1];
        str[count-1]=temp;		//swapping
        j++;
        count--;
        
    } 
}