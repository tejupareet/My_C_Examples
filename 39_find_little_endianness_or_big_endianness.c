#include<stdio.h>

int main()
{
	int num =0x12345678;
	char *cptr = (char*)&num;
	
	if(*cptr == 0x78)
	{
		printf("your system is little endianness\n");
	}
	else printf("your system is big endianness\n");
	
	return 0;
}