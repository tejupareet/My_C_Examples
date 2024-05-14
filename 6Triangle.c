/*
Inputs:
Read an Integer 'n' from the user
Sample Output:
Test Case 1:
Enter the number: 4
1 2 3 4
5     6
7 8
9

Test Case 2:
Enter the number: 5
1 2 3 4 5
6       7
8    9
10 11
12*/

#include<stdio.h>

int main(){
	int num,j,i,n=1;
	printf("enter the number: ");
	scanf("%d",&num);
	
	for(i=1; i <= num; i++)
	{
		for(j=1; j <= num; j++)
		{
			if((i==1) || (j==1) || j==(num+1)-i){
				printf("%d",n);
				n++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
    int n1=1,row,col,num;
    printf("enter the number: ");
    scanf("%d",&num);

    for( row = 1; row <= num; row++ ) //loop for rows
    {
        for( col = 1; col <= num; col++ )//loop for colomn
        {
            if( col == 1 || row == 1 || col == (num+1)-row )//*condition to print digits first row, first colomn and where row=colomn in increasing order by two
            {
                printf("%d ",n1); //printing digits from 1
                n1++;//increasing digit value for next loop
            }
            else
            {
                printf("  ");//if condition is false then printing space
            }
        }
        printf("\n");
    }
    return 0;
}
*/