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
int main()
{
	char ch;
	puts("Enter the charecters:");
	//ch=getchar();
	//putchar(ch);
	for(;(ch=getchar())!='x';)
	{
		putchar(ch);
	}
	puts(" ");
	return 0;
}














