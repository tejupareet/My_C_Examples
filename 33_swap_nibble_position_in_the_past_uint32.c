/*
Name: Teju Pareet
WAP to swap the nibble position

test case1: 
Enter the number in hexa decimal format : 0x12345678
the swaped bits: 0x34127856
*/

#include<stdio.h>

void swap_nib_pos(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
int main()
{
	int num;
	printf("Enter the number: ");
	
	unsigned int a,b,c,d,res=0,x=0;
	scanf("%x",&x);
	
	swap_nib_pos(x,a,b,c,d,res);
	return 0;
}

void swap_nib_pos(unsigned int x,unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int res)
{
	a=(0xff000000 & x)>>8;
	b=(0x00ff0000 & x)<<8;
	c=(0x0000ff00 & x)>>8;
	d=(0x000000ff & x)<<8;
	
	a=a^b;
	c=c^d;
	
	res=(a|c);
	printf("%x",res);
}