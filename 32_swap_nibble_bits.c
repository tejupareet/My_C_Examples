/*
Name: Teju Pareet
WAP to swap the nibble bit of a given 

test case1: 
Enter the number in hexa decimal format : 0xAB
the swaped bits: 0xBA
*/


#include<stdio.h>

int main()
{
	int num=0,res=0,sw=0,ret=0;
	unsigned int mask,clear;
	
	printf("Enter the number in hexa decimal format: ");
	scanf("%x",&num);
	
	res=((num&0x0f)<<4);
	sw=((num&0xf0)>>4);
	
	printf("%x\n",ret=res|sw);
	
	return 0;
	
	
	
	
	
}