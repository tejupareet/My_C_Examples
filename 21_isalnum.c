/*Name: Teju B Pareet
Date: 07-07-2022
Description: WAP to implement your own isalnum() function

Inputs: -

        An ASCII character

Outputs: -

        0 or non-zero value based on condition success or failure

Sample execution: -
Test Case 1:
user@emertxe] ./c_type_lib
Enter the character: a
The character 'a' is an alnum character.
Test Case 2:
Enter the character: ?
The character '?' is not an alnum character.*/

#include <stdio.h>

int my_isalnum(int);//function diclaration.

int main()//calling function
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);//calling function
    if((ret>=48 && ret<=57)||(ret>=65 && ret<=90)||(ret>=97 && ret<=122))/*condition to check the range of ascii equalant decimal number for char*/
    {
        printf("Entered character is alphanumeric character \n");
    }
    else
    {
        printf("Entered character is not alphanumeric character\n");
    }
    return 0;
}
int my_isalnum(int ch)//function definition
{
    int s=0;
    s=ch;
        return s;//returning the ascii dec number to called function
}




/*#include<stdio.h>

int isalnum(int ch);

int main()
{
	char cha='a',chA='A',ch1='1',ch0='0',chz='z',chZ='Z';
	printf("the ascii val ofa-z: %d-%d \n",cha,chz);
	printf("the ascii val ofA-Z: %d-%d \n",chA,chZ);
	printf("the ascii val of1-0: %d-%d \n",ch1,ch0);
	
	char ch;
	int ret=0;
	printf("Enter the charecter ch: ");
	scanf("%c",&ch);
	
	ret = isalnum(ch);
	
	if((ret>=48 && ret<=57)||(ret>=65 && ret<=90)||(ret>=97 && ret<=122))
	{
		printf("The charecter ch: '%c' is alnum\n",ch);
	}
	else printf("The charecter ch: '%c' is not alnum\n",ch) ;
	
	return 0;
}

int isalnum(int ch)
{
	int i=0;
	i=ch;
	return i;
}*/