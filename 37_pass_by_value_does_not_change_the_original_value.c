/*
Name: Teju Pareet
by below program we can understand that by passing value to the function the function cannot
modify the original value 
it can be changed by only pass by reference.
*/


#include<stdio.h>

void moddify(int num)
{
	num=num+10;
}
int main()
{
	int num=10;
	printf("before modifying num: %d\n",num);	
	moddify(num);
	printf("after modifying num: %d\n",num);// value havent changed even after modifyng by pass by value .
	
	
	return 0;
}
