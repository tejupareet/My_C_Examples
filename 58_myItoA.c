/*
Name:Teju pareet
Date: 31/07/2022
Description: WAP to implement itoa function

Inputs: -
          String, String and Integer
Sample execution: -
Test Case 1:
user@emertxe] ./itoa
Enter the number : 1234
Integer to string is 1234

Test Case 2:
user@emertxe] ./itoa
Enter the number : -1234
Integer to string is -1234

Test Case 3:
user@emertxe] ./itoa
Enter the number : +1234
Integer to string is 1234

Test Case 4:
user@emertxe] ./itoa
Enter the number : a1234
Integer to string is 0

*/

#include <stdio.h>
  
void my_reverse(char str[], int len);//function diclaretion
char* my_itoa(int num, char* str, int base);//function diclaretion
 
int main() //calling function
{
    int i, b=10;
    char charArray[128];
    printf("Enter a number \n");
    scanf("%d", &i);
     
    printf("Integer to string is %s", my_itoa(i, charArray, b));//printing output
    return 0;
}
 
/* 
* function to reverse a string  
*/
void my_reverse(char str[], int len)//function definition
{
    int start, end;
    char temp;
    for(start=0, end=len-1; start < end; start++, end--) {
        temp = *(str+start);
        *(str+start) = *(str+end);
        *(str+end) = temp;
    }
}
 
char* my_itoa(int num, char* str, int base)
{
    int i = 0;
	int a;
    
  
    /* A zero is same "0" string in all base */
    if (num == 0) {
        str[i] = '0';
        str[i + 1] = '\0';
        return str;
    }
  
    /* negative numbers are only handled if base is 10 
       otherwise considered unsigned number */
    if (num < 0 && base == 10) {
       
        num = -num;
        a=-1;
    }
  
    while (num != 0) {
        int rem = num % base;//
        str[i++] = (rem > 9)? (rem-10) + 'A' : rem + '0';
        num = num/base;
    }
  
    /* Append negative sign for negative numbers */
    if (a<0){
        str[i++] = '-';
    }
  
    str[i] = '\0';
 
   my_reverse(str, i);
 
    return str;
}