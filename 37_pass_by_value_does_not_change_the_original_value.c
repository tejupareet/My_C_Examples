/*
Name: Teju Pareet
by below program we can understand that by passing value to the function the function cannot
modify the original value 
we can modefy value by returning from function and collecting it in the main functoin

pass by value : not possible to return more then one value
		cannot modify more then one value
  		by using void we cannot modify a single value
    		by returning we can modify a single value

or

if you want to modify more then one value there is a another way that is called PASS BY REFERENCE 
To use pass by reference we need to know pointers
*/

/*
another note:   we canot have brackets on left side of calling function 
								i.e.:   (x,y)=modify(x,y);
								          ^
		  						          |
		    						  this is compile time error
	      							this is meaning of function calling without name
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
