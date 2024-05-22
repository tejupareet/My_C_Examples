/*
Name: Teju Pareet

Data is formatted or transformed 
converts the binary internal representation of the data to ASCII before being stored.
Portable and human readable 
manipuleted output
the printf() and scanf() are example for the standard i/o formatted


consider scanf("%d",&num)

for above snaf when you provide inuput = 1234
1,2,3, and 4 are read seperetly and everything will bring to the input (stdin)buffer,
 and buffer will process and converts the value into specific format(%d %c...etc).
 
 when you want to print it it brought to the out put buffer(stdout) and prints
 
 --> like printf() and scanf() are a veriodic function
	i.e.: printf("const char*",...)
								here you can see that 3 dots'...' means veriodic
								'...' is called as ellipses--->variable numbers of arguments
								you can pass any number of arguments not fixed
								printf()--->127 arguments we can pass
*/


#include<stdio.h>
/*
int main()
{
	int num1=123;
	char ch='A';
	float num2=12.345;
	char string1[]="sprintf()test";
	char string2[100];
	
	/* printf() will print the data on screen/terminal
	sprintf() will print the output to the buffer | string| array*/
	//sprintf(string2,"%d %c %f %s\n",num1,ch,num2,string1);//here all the data after first argument everything will be get store in the first argument that is string2
	
	/*to verify what string 2 consist here print string2*/
	//printf("%s\n",string2);
	
	//return 0;
//}


/*What scanf returns and about scanf sscanf()*/
/*
int main()
{
	int num1,num2,ret=0;
	printf("Enter the num1 and num2");
	
	ret=scanf("%d%d",&num1,&num2);
	
	printf("scanf return %d\n",ret);//inuput 1 2 
									//output = 2 i.e: scanf return 2 arguments
									//if you enter 'a' (char) instead of intiger scanf will return 0
									//because formate specifier int type used here so it will read nothing
									//input=a  ;  output == 0;
	
	return 0;
}
*/

/*Selective scanf scanf("%[a-zA-Z]",str)
by reading inputs like this we can read only charecters from user 
untill and unless we enter rather then alpabets it will read 
when we enter other char other then alphabets it will discard
*/
int main()
{
	char ch[10];
	printf("Enter the alphabet charecters: ");
	scanf("%10[a-z A-Z]",ch);//input=teju1234 --- output=teju "1234"are discarded
						 //if we enter more then 10 char then it will get buffer overflow
						 //or it will write it into illegal memory i.e called buffer over write
						 //to avoid this we can set limit i.e : scanf("%10[a-zA-Z]")
						 //by adding space between a-z' 'A-Z we can also read spaces because space is also an charecters
	printf("%s",ch);
	
	return 0;
}

