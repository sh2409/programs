#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,r,sum=0;
	clrscr();
	n=atoi(argv[1]);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("\n Reverse of a no is:%d",sum);
	getch();
}