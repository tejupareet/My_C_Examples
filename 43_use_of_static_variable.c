/*
Name: Teju Pareet

storage calsses: Instruct the compiler where the memory should be allocated 
-->text,stack,data or heap

whenever the variable declared with the static, storage class memory will in data segment
BSS(unintialized block) --- block started by symbol

if variable uninitialized, by default value will be '0' you can see this in below example

if initialized then it gets memory in data segment block

when ever the memory alocated in the data segment, the memory will stay until the 
program termination (end of the main block)

*/



#include<stdio.h>

int *get_num(void);
int main(){
	static int num;
	printf("uninitialized num is having:%d not garbage value\n",num);//by default uninitialized variable is having zero
	
	int *val;
	val = get_num();
	
	printf("val is: %d\n",*val);
	
	return 0;
	
}

int *get_num(void)
{
	static int num = 4+5; // by adding static keyword the data will remain in data segment even after stack frame gets deleted. if you remove static keyword then it will print nothing here
	
	return &num; // when ever the normal variable address returned from function its a segmentatoin fault
				//because after returning from the function the created stack frame gets deleted and the local variable of a function will gets lost
				 
}