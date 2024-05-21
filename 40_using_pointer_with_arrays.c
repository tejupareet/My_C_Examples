/*
In this program, the elements are stored in the integer dataay data[].

Then, the elements of the dataay are accessed using the pointer notation. By the way,

data[0] is equivalent to *data and &data[0] is equivalent to data
data[1] is equivalent to *(data + 1) and &data[1] is equivalent to data + 1
data[2] is equivalent to *(data + 2) and &data[2] is equivalent to data + 2
...
data[i] is equivalent to *(data + i) and &data[i] is equivalent to data + i
*/




#include<stdio.h>

int main()
{
	int num=0;
	printf("Enter the number of elements: ");
	scanf("%d",&num);
	int data[num];
	int *ptr=data;
	
	printf("Enter the dataay elements: ");
	
	for(int i=0; i<num; i++)
	{
		scanf("%d",data+i);
		
	}
	printf("The dataay elements are: ");
	for(int i=0; i<num; i++)
	{
		printf("%d",*ptr);
		ptr++;
	}
}