#include<stdio.h>

int main(){
	int first=0,second=1,nextterm=0,i,n=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	/*for positive fibonacci
	if(n>=0){
		while(nextterm<=n){
			if(nextterm<=n){
				printf("%d ",nextterm);
				first=second;
				second=nextterm;
				nextterm=first+second;
			}
			
		}
	}
		
	else printf("Invalid input\n");
	/*end of positive fibonacci*/
	
	
	/*negative fibonacci*/
	if(n<=0){
		while(nextterm>=n){
			if(nextterm == n){
				printf("%d ",nextterm);
				break;
			}
			
			//if(first < second){
			//	break;
			//}
			
			printf("%d ",nextterm);
			first = second;
			second = nextterm;
			nextterm = first - second;
		}
	}
	else printf("invalid input\n");
	/*end of negative fibonacci*/
	return 0;
}