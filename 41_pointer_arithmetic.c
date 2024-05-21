#include<stdio.h>

int main()
{
	int x=10;    //  consider address of x is ====> 1000
	
	int *ptr = &x; // consider address of ptr is ===>2000 and *ptr is pointing to 1000
	//*ptr++; //*(ptr++)= 1000+(1*data type)
	
	
	
	printf("*ptr++ ==> %d\n",*ptr++);  /**ptr++ = treated as *(ptr++)
												=1000+(1*4)
												=1004
												here post increment happening so 
												it will print 10 after printing 
												pointer will point somewhere else
													unpredictable.
	*/
	
	int num=10;
	int *aptr= &num;
	printf("*++aptr ====> %d\n",*++aptr);/*		*++aptr = is treated as 	*/
	
	int num2=10;
	int *bptr = &num2;
	printf("++*(bptr) ====> %d\n",++(*bptr));/*		++(*btpr)= ++(*1000)
															 = 1+(10)
															 =11
	*/
	
	int num3=10;
	int *cptr = &num3;
	printf("++*cptr ====> %d\n",++*cptr);/*		++*ptr = ++(*ptr)
													   = 1 + (10)
													   =11
	*/
	
	int num4=10;
	int *dptr = &num4;
	printf("(*dptr)++=====>%d\n",(*dptr)++);/*		(*ptr)++ = 10+1 = 11	*/
	
	/*int num=10;
	int *ptr=&num;
	printf("num=%d\n",num);
	printf("ptr=%p\n",ptr);
	printf("*ptr=%d\n",*ptr);
	printf("&num=%p\n",&num);
	printf("(*ptr)++=%d\n",(*ptr)++);
	printf("(++*ptr)=%d\n",++(*ptr));
	printf("*ptr++=%d\n",*ptr++);
	printf("++*ptr=%d\n",++*ptr);
	
	int arr[]={5,4,3,2,1};
	int *temp = arr;
	printf("array elements: ");
	for(int i=0; i<5; i++)
	{
		//printf("%d",*temp+i);
		//printf("\t*temp= %d\n",*temp);
		//printf("\t*temp++= %d\n",*temp++);
		//printf("\t*(temp++)= %d\n",*(temp++));
		//printf("\t*++temp= %d\n",*++temp);
		printf("\t*(++temp)= %d\n",*(++temp));
	}
	
	
	//printf("\t*temp++= %d\n",*temp++);
	//
	//
	//
	*/

	
	return 0;
}