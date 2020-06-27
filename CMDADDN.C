#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int i,sum=0;
	clrscr();
	for(i=1;i<argc;i++)
	{
		sum=sum+atoi(argv[i]);
	}
	printf("sum of %d numbers is: %d",argc-1,sum);
	getch();

}