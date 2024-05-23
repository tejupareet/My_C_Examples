/*
Name: Teju pareet

Understanding how user space buffe works with examples
output buffer and input buffer
useully buffer size is 1024bytes
in 1 second 11 charecters can be filled into buffer
it will take up to 91 seconds to buffer gets filled

*/

#include<stdio.h>
#include<unistd.h>

/*
int main()
{
	while(1){
	printf("i am teju\n"); //here if we remove \n first it will wait 3 sec after it prints the message
							//if add \n first will get message printed then exit buffer after 3 sec
							//by this we can understand that \n flushes the buffer
							
	sleep(3);
	}
}*/


/*another way of flushing buffer  i.e.: fflush(stdout)*/
/*
int main()
{
	while(1){
	printf("Hello World");
	fflush(stdout);//this also flushing the buffer same as \n
	sleep(3);
	}
}*/

/*flushing buffer using scanf()*/
/*
int main()
{
	int num;
	while(1)
	{
		printf("Hello World");
		scanf("%d",num);// here you can see that this also flushing the buffer
	}
}*/

/*disabling the buffer*/
/*
int main()
{
	setbuf(stdout,NULL);//disable buffer
	while(1)
	{
		printf("Hello world");
		sleep(3);
	}
}*/







/*From here all below are =======>input<========> buffer <======topics*/


/*
int main()
{
	char ch='y';
	printf("Enter char :\n");
	while(ch != 'n')//it will read unless and until you press 'n' or 'enter'
	{
		scanf("%c",&ch);  // here first way to flush input buffer is by pressing 'enter' key
							//unless until you press enter key it will keeps on reading and storing it into input buffer
		printf("%c",ch);
	}
	return 0;
}*/

/*another way to flush input buffer------>__fpurge(stdin)*/
//#include<stdio_ext.h>   this header is only available in unix systems 
//for windows we can use fflush()
/*
int main()
{
	char ch='y';
	printf("Enter a char: \n");
	while(ch != 'n')
	{
		scanf("%c",&ch);//when i read 'teju' it will only print t and 'eju' is discarded after 't' everything got flushed from the input buffer
		fflush(stdin);
		printf("%c",ch);
	}
	return 0;
}*/




/*another way to flush input buffer is by using getchar()*/
/*
int main()
{
	char ch='y';
	printf("Enter a char: \n");
	while(ch != 'n')
	{
		scanf("%c",&ch);// ch = teju
		while(getchar()!='\n');//
		printf("%c",ch);// only printed is 't' other all things get flushed due to getchar()
	}
	return 0;
}*/



/*-------another---use---of----fflush------*/

int main()
{
	while(1)
	{
		fprintf(stdout," hello ");
		fflush(stdout);// if you remove this line in unix hello will never print only world print because stderr stream is higher priority and it has no buffer concept
						// in windows due to some issue first hello will will print after world print
						//we can resolve this issue by using -----fflush--- by this both message will get printed at a same time
		fprintf(stderr," world ");
		sleep(2);
	}
	return 0;
}