/*Name: Teju B Pareet
Date: 17-07-2022
Description: WAP to count no. of characters, words and lines, entered through stdin

Inputs: -

           A string with Ctrl-D

Sample execution: -
Test Case 1:
user@emertxe] ./my_wc
Hello world
Dennis Ritchie
Linux
Character count : 33
Line count : 3
Word count : 5

Test Case 2:
Hello         world
Dennis    Ritchie
Linux
Character count : 39
Line count : 3
Word count : 5*/

#include<stdio.h>
int main()
{
    char ch;
    int charecter=0,word=1,line=0;//for counting
    char a =0,b,c;
    for(;(ch=getchar())!=EOF;)//condition to read charector from user
    {
        
        
        if(ch != EOF)//condition to count char
        {
            charecter++;
        }
        if(ch=='\n')//condition to count new line
        {
            line++;
        }
        if(((a==' ')||(a=='\t')||(a=='\n'))&&(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122))))//condition to count words
        {
            word++;
        }
        a=ch;
    }
    printf("charecter count: %d\n",charecter);
    printf("line count: %d\n",line);
    printf("word count: %d\n",word);

}