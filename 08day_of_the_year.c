/*Name: Teju B Pareet
Date: 22-06-2022
Description:  WAP to find which day of the year

Inputs: -
      Positive integer say 'N'. Where 1 <= 'N' <= 365.
      1 <= Starting day <= 7
      Option to set the first day.

Example :

       Where start_day = Wednesday
       Nth day = 5
       5th day of the year is Monday

Sample execution: -
Test Case 1:
user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
Test Case 2:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 3
The day is Wednesday
Test Case 3: 
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 8
Error: Invalid input, first day should be > 0 and <= 7
Test Case 4:
Enter the value of 'n' : 0
Error: Invalid Input, n value should be > 0 and <= 365
Test Case 5:
Enter the value of 'n' : 366
Error: Invalid Input, n value should be > 0 and <= 365*/

#include<stdio.h>
int main()
{
    int mod,res,n1,n2;
    printf("Enetr Nth number :");
    scanf("%d",&n2);
    if ( n2 > 0 && n2 <= 365  )//condition Nth number is more then 0 & less then 366
    {
        printf("1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
        printf("Enetr the first day :");
        scanf("%d",&n1);

        if( n1 > 0 && n1 <= 7 )//condition to stasrting day greater then 0 lesser then 7
        {
            mod = n2 % 7;//modules operation to get day here days start from 0-6
            res = mod + (n1-1);//so selecting particuler day we are addend partinculer day and substracting bay 1
            if(res > 6)
            {
                res=res%7;
            }
            switch (res)//switch case to prind which day 
            {
                case 1:
                    printf("The day is sunday\n");
                    break;
                case 2:
                    printf("The day is monday\n");
                    break;
                case 3:
                    printf("The day is Tuesday\n");
                    break;
                case 4:
                    printf("The day is Wednesday\n");
                    break;
                case 5:
                    printf("The day is Thursday\n");
                    break;
                case 6:
                    printf("The day is Friday\n");
                    break;
                case 0:
                    printf("The day is Saturday\n");
                    break;
                default:
                    printf("invalid input\n");
            
            }
        }
        else
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        }
    }
    else
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    }

    return 0;
}



/*#include<stdio.h>

int main(){
	int mod,n1,n2,res;
	
	printf("Enter the value of N: ");
	scanf("%d",&n1);
	
	if((n1>0)&&(n1<=365)){
		printf("1.Sunday\n2.Monday\n3.Tuesday\n4.Wednseday\n5.Thusrday\n6.Friday\n7.Saturday\n");
		
		printf("Enter the option to set the first day: ");
		scanf("%d",&n2);
		
		if((n2>0)&&(n2<=7)){
			mod=n1%7;
			res=mod+(n2-1);
			if(res>6){
				res=res%7;
			}
			switch (res){
				case 1:
					printf("The day is Sunday\n");
					break;
				case 2:
					printf("The day is Monday\n");
					break;
				case 3:
					printf("The day is Tuesday\n");
					break;
				case 4:
					printf("The day is Wednseday\n");
					break;
				case 5:
					printf("The day is Thursday\n");
					break;
				case 6:
					printf("The day is Friday\n");
					break;
				case 7:
					printf("The day is Saturday\n");
					break;
				default :
					printf("Invalid input\n");
			}
		}
		else printf("The first day should be >0 and <=7");
	}
	else printf("The N value should be >0 and <=365\n");
	return 0;
}*/