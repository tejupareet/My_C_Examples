/*Name: Teju B Pareet

Description: WAP to generate negative fibbonacci numbers using recursion

Inputs: -
Sample execution: -
Integers N
Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: -8
0, 1, -1, 2, -3, 5, -8
Test Case 2:
Enter a number: -10
0, 1, -1, 2, -3, 5, -8
Test Case 3:
Enter a number: -21
0, 1, -1, 2, -3, 5, -8, 13, -21

Test Case 3:
Enter a number: 21
Invalid input*/

#include<stdio.h>
void neg_fibo(int ,int, int, int);//function diclaration
int main ()
{
    int a=0,b=1,num,sub=0;//intialization of intigers
    printf("eneter the num: ");//reading limit
    scanf("%d",&num);
    neg_fibo(a,b,num,sub);//calling function
    return 0;
}
void neg_fibo(int a, int b, int num, int sub)//function defination
{
   if(num == 0)
   {
        printf("0");
   }
   else if(num < 0)//condtion to get only negative number
   {
       if(num<=a && num <= -a )//condition to print only negative fibbonacci series
       {
            printf("%d",a);
            if(sub > num)//logic to print comma
            {
                printf(", ");
            }
            sub=a-b;
            a=b;			//logic to get negative fibbonacci series
            b=sub;
            neg_fibo(a,b,num,sub);
       }
   }
   else
   {
   	printf("Invalid input");
   }

}