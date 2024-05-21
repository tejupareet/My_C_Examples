/*
Name: Teju Pareet

Let's see why data pointer is important in pointers with the example
How many data should be fetched from the address will be on the data bus

int num = 0x12345678;

How the above value are stored or distributed to 4 bytes is decided by Endianness

Endianness = how data is stored in memory

--->little endianness
--->big endianness

little endiannes  -->  LSB will be in the lowest address
little endianness Ex: num=12345678

			4th byte=12, 3rd byte=34, 2nd byte=56, 1st byte=78;
			little endiannes --> 78|56|34|12
			
			here you can see that 78 is in the lowest address 
			so 78 is stored first in the address which is msb side
			
			
			
big endianness    -->  MSB will be in the lowest address

					same example above
					big endianness --> 12|34|56|78
					
					here you can see that 12 is in the msb side of variable
					hence 12 is stored in the msb side of address
					
					lets check this in below example by storing same variable into
					2 different data types
					


*/


#include<stdio.h>

int main()
{
	int num=0x12345678;
	int *iptr = &num; //num is integer and it is assigned to intigere pointer
	char *cptr = &num;// num is integer and it is assigned to charecter pointer
	
	/*
					num = 0x12345678
	   little endiannes = |	78	|	56	|	34	|	12	|
				address :  1000	   1001	   1002	   1003

					iptr = | 1000 |				cptr = | 1000 |
									2000						3000
					
					above you can see iptr is having address 2000 and pointing to 1000
					above you can see cptr is having address 3000 and pointing to 1000
					
					when we print the data type int *iptr--->1000--->78563412--|
																			   |_>reorder to 12345678
					i.e.: printf("%x\n",*iptr);
					output = 12345678
					
					but we try to print char data type it prints only 1 byte of info 
					i.e: MSB ---->  78
					printf("%x\n",*cptr);
					output = 78.
					
					so this is why data type is important when we are using pointers
	*/
	
	printf("output of intiger pointer   : %x\n",*iptr);
	printf("output of charecter pointer : %x\n",*cptr);
}