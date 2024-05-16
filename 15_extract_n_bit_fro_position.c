#include<stdio.h>

int get_n_bit_from_pos(int,int,int);

int main()
{
	int num,n,pos,res=0;
	
	printf("Enter num n pos: ");
	scanf("%d%d%d",&num,&n,&pos);
	
	res=get_n_bit_from_pos(num,n,pos);
	
	printf("val of n bit from given position is: %d\n",res);
	
	return 0;
}

int get_n_bit_from_pos(int num, int n, int pos)
{
	int res=0;
	
	res = ( num & ((1<<n)-1)<<(pos-n+1))>>(pos-n+1);
	
	return res;
}