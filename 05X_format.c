#include<stdio.h>

int main(){
	int n=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if((i==j)||(j==(n+1)-i)){
				printf("%d",j);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
/*
int main()
{
    int row,col,num;
    printf("enetr the number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)//for loop to row 
    {
        for(col=1;col<=num;col++)// for loop to colomn
        {
            if((col==row)||(col==(num+1)-row))//if condition is true digits will print
                printf("%d",col);
            else                    //else space will be printed
                printf(" ");
        }
        printf("\n");
    }
    return 0;
        
    }*/