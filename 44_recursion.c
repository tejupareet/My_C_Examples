/*
Name: Teju Pareet

Recursion is the process of repeating items in self-similar way
in program a function calling itself is called as recursive function

--> Main is also function but main is not a true recursive function 
because true recursion functions will have a parameters but main doesn't have any parameters
although main can be recursion
-->when we use main as function every time its called, because of it dont have parameters it uses local variable 
which results in it initializes varible in every stack frame by replacing previous variable value later it leads to stack overflow.

lets see this in example.


*/

#include<stdio.h>

void print(int self_call);

int main()  /*False recursive function*/
{
	static int num=0;
	
	if(num++ == 0)// here you can see that num is always zero here because every time new frame created by recursion 
				  // the num is again initialized with zero'0' by replacing '1'
				  //so which will results in infinite recursion.
				  
				  //to avoid this we need to initialize the num as static variable
	{
		printf("num=%d\n",num); 
		main();
	}
	else 
	{
		printf("End\n");
	}
	
	print(0);
	return 0;
}


void print(int self_call)
{
	if(self_call++ !=5)
	{
		printf("\n%d\n",self_call);
		print(self_call);
	}
	printf("\n%d\n",self_call); // by adding this printf after if condition you can see that how stack frame gets deleted by returning the variable
	
}