#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,r,num,sum=0;
	clrscr();
	n=atoi(argv[1]);
	num=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==num)
	{
		printf("\n Armstrong");
	}
	else
	{
		printf("\n Not Armstrong");
	}
	getch();
}