/*Name: Teju B Pareet

Description: WAP to implement getword function

Inputs: -
          String
Sample execution: -
Test Case 1:
user@emertxe] ./getword
Enter the string : Welcome to Emertxe
You entered Welcome and the length is 7
Test Case 2:
user@emertxe] ./getword
Enter the string : Hello
You entered Hello and the length is 5*/

#include <stdio.h>
int getword(char str[]);//function declaretion

int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);//reading string char

		len = getword(str);//function calling

        printf("You entered %s and the length is %d\n", str, len);
}
int getword(char str[])//function definition
{
    int a,t,length;
        
    for(t=0;str[t]!='\0';t++)//loop to check string char
    {
        if(str[t]!=' ')//if char is not space or tab then counting the length
        {
            length++;
        }
 
        if(str[t]==' ')//if char is space or tab then converting it into null char
        {
            str[t]='\0';
            break;//if space is present the come out
        }
    }
return length;//returning length to called function
}


/*#include<stdio.h>

int get_word(char str[]);

int main()
{
	char str[50]={'\0'};
	int len=0,res=0;
	
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	res=get_word(str);
	
	printf("You entered %s and the length is %d\n",str,res);
	
	return 0;
}

int get_word(char *str)
{
	int i=0,j=0;
	while(str[i]!='\0'){
	if(str[i]==' ')
	{
		str[i]='\0';
	}
	i++;
	}
	while(str[j]!='\0'){
		j++;
	}
	return j;
}*/