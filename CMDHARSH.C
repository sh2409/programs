#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
	int n,num,r,sum=0;
	clrscr();
	n=atoi(argv[1]);
	num=n;
	while(n)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(num%sum==0)
	{
		printf("\n Harshad no");
	}
	else
	{
		printf("\n Not Harshad no");
	}
	getch();
}