#include<stdio.h>

int print_n_bit_lsb_of_num(int,int);

int main(){
	
	int num,n,res=0;
	
	printf("Enter the num n: ");
	scanf("%d%d",&num,&n);
	
	res=print_n_bit_lsb_of_num(num,n);
	return 0;
}

int print_n_bit_lsb_of_num(int num, int n)
{
	int i,res=0;
	printf("bit of number %d: ");
	
	for(i=n-1; i>=0; i-- )
	{
		printf("%d ",res=(1 & (num>>i)));
	}
}