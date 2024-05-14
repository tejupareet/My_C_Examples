#include<stdio.h>

int main(){
	int n=0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(n>0){
		int b=0;
		int sum=0;
		for(int i=1; i<n; i++){
			if((n%i)==0){
				b=b+i;
			}
		}
		if (b==n){
			printf("the entered number is perfect");
		}
		else printf("it's a not perfect number");
		
	}
	else printf("you have entered negative number\n");
}