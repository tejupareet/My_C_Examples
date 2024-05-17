/*Name: Teju B Pareet
Date: 24-06-2022
Description: WAP to count number of set bits in a given number and print parity

Sample Execution:

Test Case 1:
Enter the number : 7
Number of set bits = 3
Bit parity is Odd

Test Case 2:
Enter the number : 15
Number of set bits = 4
Bit parity is Even

Test Case 3:
Enter the number : 6
Number of set bits = 2
Bit parity is Even */

#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enetr the number:");
    scanf("%d",&num);
    for( i = 0; i<=31 ; i++ )//loop to run for 32 times for checking every bit of intiger
    {
        if(num & (1<<i))//condition to check by varying i value and shifting to left side
        {
            count++;//counting the set bits
        }
    }
    printf("Number of set bits = %d\n",count);
    if( count % 2 == 0 )//condition to check even or odd
    {
        printf("Bit parity is Even\n");
    }
    else
    {
        printf("Bit parity is Odd\n");
    }
    return 0;
}




/*#include<stdio.h>

int main()
{
	int i,num,count=0;
	printf("enter the number: ");
	scanf("%d",&num);
	for( i = 0; i<=31; i++ )
	{
		if(num & (1<<i))
		{
			count++;
		}
	}
	printf("The number of set bits are = %d\n",count);
	if(count % 2 == 0)
	{
		printf("Bit is Even parity\n");
	}
	else
	{
		printf("Bit is odd parity\n");
	}
	return 0;
}
*/