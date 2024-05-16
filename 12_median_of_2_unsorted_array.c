#include<stdio.h>

int main(){
	int i,j,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	int arr[num];
	
	for(i=0; i<=num; i++)
	{
		arr[i]=1;
	}
	for(i=2; i<=num; i++)
	{
		if(arr[i]==1)
		{
			for(j=i*i; j<=num; j=i+j)
			{
				arr[j]=0;
			}
		}
	}
	printf("The prime number less than or equals to are---->");
	for(i=0; i<=num; i++)
	{
		if(arr[i]==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}