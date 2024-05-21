#include<stdio.h>

int main()
{
	int num1=1,num2=4,a=3,b=1;
	
	int res=0;
	
	printf("the greater value is : %d\n", num1>num2? num1 : num2 );
	
	res= (num1>num2 ? (a>b? printf("a is greater\n"):printf("b is greater\n")):printf("num2 is greater\n"));
}
	