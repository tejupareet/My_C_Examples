/*Name: Teju B Pareet
Date: 03-07-2022
Description: WAP to put the (b-a+1) lsb’s of num into val[b:a]

Inputs: -
          Integers num, val, a, b

Sample execution: -
Test Case 1:
user@emertxe] ./bit_ops
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Result : 158*/


#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);//function diclaration

int main()//calling function
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val);//function calling
    
    printf("Result = %d\n", res);
}
int replace_nbits_from_pos(int num,int a,int b, int val)//function definition
{
    int n=0;
    n=(b-a)+1; //getting n value
    return (val & ~ (((1<<n)-1) <<b-a+1 )) | ((num & ((1<<n)-1)) << b-a+1) ;/*clearing n bitts from posintion ,and replacing it with n values from num*/
}


/*#include<stdio.h>

int put_lsb_of_num_into_val_pos(int,int,int,int,int);

int main(){
	int num,n,res=0,a,b,val;
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	
	printf("Enter the num and val: ");
	scanf("%d%d",&num,&val);
	
	n = b-a+1;
	
	res = put_lsb_of_num_into_val_pos(num,n,b,val,a);
	
	printf("updated num of val is : %d\n",res);
	
	return 0;
}

int put_lsb_of_num_into_val_pos(int num, int n, int b, int val, int a)
{
	int res=0;
	res = (val & ~ (((1<<n)-1) <<b-a+1 )) | ((num & ((1<<n)-1)) << b-a+1) ;//((val & (~((1<<n)-1)) << (b-n+1))) | (num & ((1<<n)-1) << (b-n+1));
	return res;
}*/