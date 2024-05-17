#include<stdio.h>

typedef int my_int32t;

void main(void){
	
	my_int32t number=0;
	printf("Enter the value for A: ");
	scanf("%d",&number);
	
	if(number>=0){
		if(number>0){
			if((number%2)==0){
				printf("A value is positive even number\n");
			}
			else printf("A value is positive odd number\n");
		}
		else printf("The entered value is 0 and zero is neither odd nor a even\n");
	}
	else{
		if((number%2)==0){
			printf("The entered A value is negative even number\n");
		}
		else printf("The entered A value is negative odd number\n");
	}
}