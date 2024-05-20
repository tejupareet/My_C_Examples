/*Name: Teju B Pareet

Description: WAP to generate fibbonacci numbers using recursion

Inputs: -
           Integers N
Note : Should not use static and global variables.

Sample execution: -

Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: 8
0, 1, 1, 2, 3, 5, 8

Test Case 2:
Enter a number: 10
0, 1, 1, 2, 3, 5, 8

Test Case 3:
Enter a number: 21
0, 1, 1, 2, 3, 5, 8, 13, 21

Test Case 4:
Enter a number: -12
Invalid input*/



#include<stdio.h>

void fibo_recursion(int,int,int,int);

int main(){
	
	int num=0,a=0,b=1,sum=0;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	fibo_recursion(num,a,b,sum);
	
	return 0;
}

void fibo_recursion(int num, int a, int b, int sum)
{
	if(num==0){
		printf("%d",a);
	}
	else if(num > 0)
	{
		if(a<=num)
		{
			if(a==0){
				//printf("%d",a);
			}
			if(a<=num && a!=0){
				printf(", ");
			}
			printf("%d",a);
			
			
			sum=a+b;
			a=b;
			b=sum;
			fibo_recursion(num,a,b,sum);
		}
	}
	else printf("Invalid input\n");
}