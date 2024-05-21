#include<stdio.h>

int main()
{
	/*below you can see that comma is being used as a seperator of variables*/
	int num1=5,num2=4,res=0,sum=0;
	
	/*lets see how comma operator works*/
	res=num1,num2;
	
	printf("the assigned value of above res= num1,num2 is num2 i.e.:%d\n because comma',' operator assignes right most of the value\n",res);
	
	/*Now see below what will be the ans stored in 'res'*/
	res=((sum=num1+num2),(sum+num2));
	
	//lets see whats going to store int the res
	
	printf("the ans stored in the res is %d\n",res);//res=13
	/* now you wil be wondered res = (sum=num1+num2),sum+num2;
								   = sum =5+4,sum+4
								   = 9,9+4
								   =13*/
	
	return 0;
	
	
}