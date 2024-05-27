/*Name: Teju B Pareet
Description: WAP to replace each string of one or more blanks by a single blank

Inputs: -

String with multi-spaces between words
Sample execution: -
Test Case 1:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
Pointers are sharp knives.

Test Case 2:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Welcome                to Emertxe
Welcome to Emertxe

Test Case 1:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Welcome to Emertxe
Welcome to Emertxe*/
#include <stdio.h>

void replace_blank(char []);//function diclaretion

int main()
{
    char str[200];
    
   // printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);//reading string charecters
    
    replace_blank(str);//function calling
    
    printf("%s\n", str);//printing string after modification
}

void replace_blank(char *str)//function definition
{
    
    int count, i = 0, j = 0;

    while (str[i] != '\0')//loop to run untill null 
    {   
        if (!(str[i] == ' ' && str[i+1] == ' '))//replacing many space into one space if previus char and current char are equal
        {
            str[j] = str[i];
            j++;
			
        }
		
        i++;
		
    }   
    str[j] ='\0';//after all space replacing by one space making last char+1=null 

} 



/*#include<stdio.h>

void replace_blanks(char str[]);

int main()
{
	char str[50]={'\0'};
	
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	replace_blanks(str);
	printf("%s\n",str);
	
	return 0;
}

void replace_blanks(char *str)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
		if(!(str[i]==' ' && str[i+1]==' '))
		{
			str[j]=str[i];
			j++;
		}
		i++;
		
	}
	str[j]='\0';
}*/