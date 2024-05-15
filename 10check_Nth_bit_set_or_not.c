/*Name: Teju B Pareet
Date: 24-06-2022
Description:  WAP to check N th bit is set or not, If yes, clear the M th bit

Sample Execution:

Test Case 1:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Updated value of num is 3 

Test Case 2:
Enter the number: 19
Enter 'N': 2
Enter 'M': 4
Updated value of num is 19 */


#include<stdio.h>
int main()
{
    int  m,n,num;
    unsigned mask,clr;
    printf("Enetr the number:");
    scanf("%d",&num);
    printf("Enetr 'N':");
    scanf("%d",&n);
    printf("Enetr 'M':");
    scanf("%d",&m);
    mask=1<<n;//masking for checking setbit with zeros except Nth number
    clr=~(1<<m);//masking for clearing bit with one except Mth number
    if( num & mask )//condition to check Nth number is set or not
    {
        num=(num & clr);//clearing Mth bit if Nth bit is set
    }
    printf("Updated value of num is %d\n",num);
    return 0;
}


/*#include<stdio.h>

int main()
{
	int n=0,m=0,num=0;
	unsigned mask,clr;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter the number for N: ");
	scanf("%d",&n);
	printf("Enter the number for M: ");
	scanf("%d",&m);
	
	mask=1<<n;
	clr=~(1<<m);
	
	if(num & mask)
	{
		num=(num & clr);
	}
	printf("The updated value is: %d\n",num);
	return 0;
}*/