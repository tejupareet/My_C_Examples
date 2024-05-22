/*
Name: Teju Pareet

unformatted i/o are ====>works with only charecters or strings
these are non human readable
directly written to memory without convergence
internal binary represantaion of the data directly between memory and file
-->unformatted i/o are non human readable so you cant type it out on terminal screen or edit it with text editors

getchar() and putchar() are two function part of standard c lib

some function like getch(), getche(), putch() are defined in conio.h which is not a standard c library headers & is not supported by the compilers targetting linux/unix
 
*/


#include<stdio.h>
/*
int main()
{
	char ch;
	//ch = getchar();//reads single char at a time
	//putchar(ch);//print output char at a time
	
	puts("Enter the charecter"); // puts prints the string and it has by default new line at the end of string
	 
	 puts("");
	 
	 char a;
	a = getchar();
	 
	 putchar(a);
	 puts("");//new line
	
	return 0;
}*/

/*Reading char with loops*/
/*
int main()
{
	char ch;
	puts("Enter the charecters:");
	//ch=getchar();
	//putchar(ch);
	for(;(ch=getchar())!='x';)//if you wite condition like for(;ch=getchar() != 'x')then compiler checks for firts is != because '!=' is havinf higher presidence so when you read the input is invalid then when you try to print below by putchar the unreadable symbols will be printed 
							  // to avoid this use () for getting higher presidence for condition reading char
	{
		putchar(ch);
	}
	puts(" ");
	return 0;
}
*/

/*converting lower to upper*/
#include<ctype.h>
/*int main()
{
	char ch;
	puts("Enter charecters");
	for(;(ch=getchar()) != EOF;)//to come out of the loop press ctl+c
	{
		putchar(toupper(ch));
	}
	return 0;
}*/

/*converting lower to upper without using ctype.h header file*/
/*
int main()
{
	char ch;
	puts("Enter the charecters");
	for(;(ch=getchar())!=EOF;)
	{
		ch=ch-32;
		putchar(ch);
	}
	
	return 0;
}*/

/*puts() and gets() ====>same as getchar() and putchar() but syntax is different*/
/*
int main()
{
	//getchar() == getc(stdin)
	//putchar(ch)==putc(ch,stdout)
	
	char ch;
	puts("Enter the charecters");
	for(;(ch=getc(stdin))!=EOF;)
	{
		putc(toupper(ch),stdout);
	}
	return 0;
}*/


/*how input buffer stores and flushes data and how to flush data manually */
/*
#include<unistd.h>
int main()
{
	while(1)
	{
		putc('A',stderr);//by stdout blank screen will appear until buffer gets full only once after buffer getting filled then only it will flush the data
						 //to avoid this scenerio change the stream stdout to stderr 
						 //stderr has no concept of buffer
						 //there is another way of flushing '\n' new line will autometically flush the data
						 
		sleep(1);//its a unistd functoin now it creates delay of 1 second
		
	}
	//putc('End',stdout);
	return 0;
}
*/



/*reading charecter more then one without loop and not taking char to control it 
there is function to do this all
for that we need to give charrecter array
*/
#include<unistd.h>
int main()
{
	char str[10];
	
	gets(str);//gets() is function passes starting address of array (base add) it will store everything one by one 
			  //gets() is dangerous function it can read more charecter then specified which will results in bufferoverflow==illigal memory access==segmentation fault
			  // to avoid this we can use fgets();
			  //by using fgets it will not take input more then specified 
			  //if we enter == emertxe mg road 
			  //fgets() output==emertxe m only 10-1=9 char printed
			  // by this we can know that fgets() is safer and reads input only specified size
	puts(str);
	
	return 0;
}














