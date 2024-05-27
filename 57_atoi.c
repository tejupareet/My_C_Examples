/*Name: Teju B Pareet

Description: WAP to implement atoi function

Inputs: -
          String, String and Integer

Sample execution: -
Test Case 1 :
Enter a numeric string: 12345
String to integer is 12345

Test Case 2 :
Enter a numeric string: -12345
String to integer is -12345

Test Case 3 :
Enter a numeric string: +12345
String to integer is 12345

Test Case 4 :
Enter a numeric string: +-12345
String to integer is 0

Test Case 5 :
Enter a numeric string: 12345-
String to integer is 12345

Test Case 6 :
Enter a numeric string: abcd12345
String to integer is 0

Test Case 7 :
Enter a numeric string: 12345abcd
String to integer is 12345*/
#include <stdio.h>
int myAtoi(const char *);//function diclaretion
int main()
{
    char str[20];
    printf("Enter a numeric string : ");
    scanf("%s", str);//reading strings from user
 
    printf("String to integer is %d\n", myAtoi(str));//printing integer values
    return 0;
} 
int myAtoi(const char* str)//calling function
{
    int sign = 1, base = 0, i = 0;
     
    
    while (str[i] == ' ')//loop to avoid spaces
    {
        i++;//if space is present then it just skips it by incrementing
    }
    if (str[i] == '-' || str[i] == '+')//condtion for sign
    {
        sign = 1 - 2 * (str[i++] == '-');
    }
    while (str[i] >= '0' && str[i] <= '9')//condtion to get only diits
    {
     
        base = 10 * base + (str[i++] - '0');
    }
    return base * sign;//returning intigers along with sign to called function
}

 